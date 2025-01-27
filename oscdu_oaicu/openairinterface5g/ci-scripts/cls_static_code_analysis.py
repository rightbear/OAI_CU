#/*
# * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
# * contributor license agreements.  See the NOTICE file distributed with
# * this work for additional information regarding copyright ownership.
# * The OpenAirInterface Software Alliance licenses this file to You under
# * the OAI Public License, Version 1.1  (the "License"); you may not use this file
# * except in compliance with the License.
# * You may obtain a copy of the License at
# *
# *      http://www.openairinterface.org/?page_id=698
# *
# * Unless required by applicable law or agreed to in writing, software
# * distributed under the License is distributed on an "AS IS" BASIS,
# * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# * See the License for the specific language governing permissions and
# * limitations under the License.
# *-------------------------------------------------------------------------------
# * For more information about the OpenAirInterface (OAI) Software Alliance:
# *      contact@openairinterface.org
# */
#---------------------------------------------------------------------
# Python for CI of OAI-eNB + COTS-UE
#
#   Required Python Version
#     Python 3.x
#
#   Required Python Package
#     pexpect
#---------------------------------------------------------------------

#-----------------------------------------------------------
# Import
#-----------------------------------------------------------
import sys              # arg
import re               # reg
import logging
import os
from pathlib import Path
import time

#-----------------------------------------------------------
# OAI Testing modules
#-----------------------------------------------------------
import sshconnection as SSH
import helpreadme as HELP
import constants as CONST

#-----------------------------------------------------------
# Class Declaration
#-----------------------------------------------------------
class CppCheckResults():

	def __init__(self):

		self.variants = ['bionic', 'focal']
		self.versions = ['','']
		self.nbErrors = [0,0]
		self.nbWarnings = [0,0]
		self.nbNullPtrs = [0,0]
		self.nbMemLeaks = [0,0]
		self.nbUninitVars = [0,0]
		self.nbInvalidPrintf = [0,0]
		self.nbModuloAlways = [0,0]
		self.nbTooManyBitsShift = [0,0]
		self.nbIntegerOverflow = [0,0]
		self.nbWrongScanfArg = [0,0]
		self.nbPtrAddNotNull = [0,0]
		self.nbOppoInnerCondition = [0,0]

class StaticCodeAnalysis():

	def __init__(self):

		self.ranRepository = ''
		self.ranBranch = ''
		self.ranAllowMerge = False
		self.ranCommitID = ''
		self.ranTargetBranch = ''
		self.eNBIPAddress = ''
		self.eNBUserName = ''
		self.eNBPassword = ''
		self.eNBSourceCodePath = ''

	def CppCheckAnalysis(self, HTML):
		if self.ranRepository == '' or self.ranBranch == '' or self.ranCommitID == '':
			HELP.GenericHelp(CONST.Version)
			sys.exit('Insufficient Parameter')
		lIpAddr = self.eNBIPAddress
		lUserName = self.eNBUserName
		lPassWord = self.eNBPassword
		lSourcePath = self.eNBSourceCodePath

		if lIpAddr == '' or lUserName == '' or lPassWord == '' or lSourcePath == '':
			HELP.GenericHelp(CONST.Version)
			sys.exit('Insufficient Parameter')
		logging.debug('Building on server: ' + lIpAddr)
		mySSH = SSH.SSHConnection()
		mySSH.open(lIpAddr, lUserName, lPassWord)

		self.testCase_id = HTML.testCase_id

		# on RedHat/CentOS .git extension is mandatory
		result = re.search('([a-zA-Z0-9\:\-\.\/])+\.git', self.ranRepository)
		if result is not None:
			full_ran_repo_name = self.ranRepository.replace('git/', 'git')
		else:
			full_ran_repo_name = self.ranRepository + '.git'
		mySSH.command('mkdir -p ' + lSourcePath, '\$', 5)
		mySSH.command('cd ' + lSourcePath, '\$', 5)
		mySSH.command('if [ ! -e .git ]; then stdbuf -o0 git clone ' + full_ran_repo_name + ' .; else stdbuf -o0 git fetch --prune; fi', '\$', 600)
		# Raphael: here add a check if git clone or git fetch went smoothly
		mySSH.command('git config user.email "jenkins@openairinterface.org"', '\$', 5)
		mySSH.command('git config user.name "OAI Jenkins"', '\$', 5)

		mySSH.command('echo ' + lPassWord + ' | sudo -S git clean -x -d -ff', '\$', 30)
		mySSH.command('mkdir -p cmake_targets/log', '\$', 5)
		# if the commit ID is provided use it to point to it
		if self.ranCommitID != '':
			mySSH.command('git checkout -f ' + self.ranCommitID, '\$', 30)
		# if the branch is not develop, then it is a merge request and we need to do
		# the potential merge. Note that merge conflicts should already been checked earlier
		if (self.ranAllowMerge):
			if self.ranTargetBranch == '':
				if (self.ranBranch != 'develop') and (self.ranBranch != 'origin/develop'):
					mySSH.command('git merge --ff origin/develop -m "Temporary merge for CI"', '\$', 5)
			else:
				logging.debug('Merging with the target branch: ' + self.ranTargetBranch)
				mySSH.command('git merge --ff origin/' + self.ranTargetBranch + ' -m "Temporary merge for CI"', '\$', 5)

		mySSH.command('docker image rm oai-cppcheck:bionic oai-cppcheck:focal || true', '\$', 60)
		mySSH.command('sed -e "s@xenial@bionic@" ci-scripts/docker/Dockerfile.cppcheck.xenial > ci-scripts/docker/Dockerfile.cppcheck.bionic', '\$', 6)
		mySSH.command('docker build --tag oai-cppcheck:bionic --file ci-scripts/docker/Dockerfile.cppcheck.bionic . > cmake_targets/log/cppcheck-bionic.txt 2>&1', '\$', 600)
		mySSH.command('sed -e "s@xenial@focal@" ci-scripts/docker/Dockerfile.cppcheck.xenial > ci-scripts/docker/Dockerfile.cppcheck.focal', '\$', 6)
		mySSH.command('docker build --tag oai-cppcheck:focal --file ci-scripts/docker/Dockerfile.cppcheck.focal . > cmake_targets/log/cppcheck-focal.txt 2>&1', '\$', 600)
		mySSH.command('docker image rm oai-cppcheck:bionic oai-cppcheck:focal || true', '\$', 30)

		# Analyzing the logs
		mySSH.command('cd ' + lSourcePath + '/cmake_targets', '\$', 5)
		mySSH.command('mkdir -p build_log_' + self.testCase_id, '\$', 5)
		mySSH.command('mv log/* ' + 'build_log_' + self.testCase_id, '\$', 5)
		mySSH.close()

		mySSH.copyin(lIpAddr, lUserName, lPassWord, lSourcePath + '/cmake_targets/build_log_' + self.testCase_id + '/*', '.')
		CCR = CppCheckResults()
		CCR_ref = CppCheckResults()
		vId = 0
		for variant in CCR.variants:
			refAvailable = False
			if self.ranAllowMerge:
				refFolder = str(Path.home()) + '/cppcheck-references'
				if (os.path.isfile(refFolder + '/cppcheck-'+ variant + '.txt')):
					refAvailable = True
					with open(refFolder + '/cppcheck-'+ variant + '.txt', 'r') as refFile:
						for line in refFile:
							ret = re.search(' (?P<nb_errors>[0-9\.]+) errors', str(line))
							if ret is not None:
								CCR_ref.nbErrors[vId] = int(ret.group('nb_errors'))
							ret = re.search(' (?P<nb_warnings>[0-9\.]+) warnings', str(line))
							if ret is not None:
								CCR_ref.nbWarnings[vId] = int(ret.group('nb_warnings'))
			if (os.path.isfile('./cppcheck-'+ variant + '.txt')):
				xmlStart = False
				with open('./cppcheck-'+ variant + '.txt', 'r') as logfile:
					for line in logfile:
						ret = re.search('Unpacking cppcheck \((?P<version>[0-9\.]+)', str(line))
						if ret is not None:
						   CCR.versions[vId] = ret.group('version')
						if re.search('RUN cat cmake_targets/log/cppcheck.xml', str(line)) is not None:
							xmlStart = True
						if xmlStart:
							if re.search('severity="error"', str(line)) is not None:
								CCR.nbErrors[vId] += 1
							if re.search('severity="warning"', str(line)) is not None:
								CCR.nbWarnings[vId] += 1
							if re.search('id="memleak"', str(line)) is not None:
								CCR.nbMemLeaks[vId] += 1
							if re.search('id="nullPointer"', str(line)) is not None:
								CCR.nbNullPtrs[vId] += 1
							if re.search('id="uninitvar"', str(line)) is not None:
								CCR.nbUninitVars[vId] += 1
							if re.search('id="invalidPrintfArgType_sint"|id="invalidPrintfArgType_uint"', str(line)) is not None:
								CCR.nbInvalidPrintf[vId] += 1
							if re.search('id="moduloAlwaysTrueFalse"', str(line)) is not None:
								CCR.nbModuloAlways[vId] += 1
							if re.search('id="shiftTooManyBitsSigned"', str(line)) is not None:
								CCR.nbTooManyBitsShift[vId] += 1
							if re.search('id="integerOverflow"', str(line)) is not None:
								CCR.nbIntegerOverflow[vId] += 1
							if re.search('id="wrongPrintfScanfArgNum"|id="invalidScanfArgType_int"', str(line)) is not None:
								CCR.nbWrongScanfArg[vId] += 1
							if re.search('id="pointerAdditionResultNotNull"', str(line)) is not None:
								CCR.nbPtrAddNotNull[vId] += 1
							if re.search('id="oppositeInnerCondition"', str(line)) is not None:
								CCR.nbOppoInnerCondition[vId] += 1
			vMsg  = ''
			vMsg += '========  Variant ' + variant + ' - ' + CCR.versions[vId] + ' ========\n'
			vMsg += '   ' + str(CCR.nbErrors[vId]) + ' errors\n'
			vMsg += '   ' + str(CCR.nbWarnings[vId]) + ' warnings\n'
			vMsg += '  -- Details --\n'
			vMsg += '   Memory leak:                     ' + str(CCR.nbMemLeaks[vId]) + '\n'
			vMsg += '   Possible null pointer deference: ' + str(CCR.nbNullPtrs[vId]) + '\n'
			vMsg += '   Uninitialized variable:          ' + str(CCR.nbUninitVars[vId]) + '\n'
			vMsg += '   Undefined behaviour shifting:    ' + str(CCR.nbTooManyBitsShift[vId]) + '\n'
			vMsg += '   Signed integer overflow:         ' + str(CCR.nbIntegerOverflow[vId]) + '\n'
			vMsg += '\n'
			vMsg += '   Printf formatting issue:         ' + str(CCR.nbInvalidPrintf[vId]) + '\n'
			vMsg += '   Modulo result is predetermined:  ' + str(CCR.nbModuloAlways[vId]) + '\n'
			vMsg += '   Opposite Condition -> dead code: ' + str(CCR.nbOppoInnerCondition[vId]) + '\n'
			vMsg += '   Wrong Scanf Nb Args:             ' + str(CCR.nbWrongScanfArg[vId]) + '\n'
			for vLine in vMsg.split('\n'):
				logging.debug(vLine)
			if self.ranAllowMerge and refAvailable:
				if CCR_ref.nbErrors[vId] == CCR.nbErrors[vId]:
					logging.debug('   No change in number of errors')
				elif CCR_ref.nbErrors[vId] > CCR.nbErrors[vId]:
					logging.debug('   Good! Decrease in number of errors')
				else:
					logging.debug('   Bad! increase in number of errors')
				if CCR_ref.nbWarnings[vId] == CCR.nbWarnings[vId]:
					logging.debug('   No change in number of warnings')
				elif CCR_ref.nbWarnings[vId] > CCR.nbWarnings[vId]:
					logging.debug('   Good! Decrease in number of warnings')
				else:
					logging.debug('   Bad! increase in number of warnings')
			# Create new reference file
			if not self.ranAllowMerge:
				refFolder = str(Path.home()) + '/cppcheck-references'
				if not os.path.isdir(refFolder):
					os.mkdir(refFolder)
				with open(refFolder + '/cppcheck-'+ variant + '.txt', 'w') as refFile:
					refFile.write(vMsg)
			vId += 1

		HTML.CreateHtmlTestRow('N/A', 'OK', CONST.ALL_PROCESSES_OK)
		HTML.CreateHtmlTestRowCppCheckResults(CCR)
		logging.info('\u001B[1m Static Code Analysis Pass\u001B[0m')

		return 0


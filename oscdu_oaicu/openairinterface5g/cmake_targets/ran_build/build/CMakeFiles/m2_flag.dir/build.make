# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build

# Utility rule file for m2_flag.

# Include the progress variables for this target.
include CMakeFiles/m2_flag.dir/progress.make

CMakeFiles/m2_flag: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/R14/m2ap-14.0.0.asn1
	../../tools/make_asn1c_includes.sh M2AP_ -fno-include-deps\ -DEMIT_ASN_DEBUG=1 /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/M2AP_R14 /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/R14/m2ap-14.0.0.asn1

m2_flag: CMakeFiles/m2_flag
m2_flag: CMakeFiles/m2_flag.dir/build.make

.PHONY : m2_flag

# Rule to build all files generated by this target.
CMakeFiles/m2_flag.dir/build: m2_flag

.PHONY : CMakeFiles/m2_flag.dir/build

CMakeFiles/m2_flag.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/m2_flag.dir/cmake_clean.cmake
.PHONY : CMakeFiles/m2_flag.dir/clean

CMakeFiles/m2_flag.dir/depend:
	cd /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/m2_flag.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/m2_flag.dir/depend


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

# Include any dependencies generated for this target.
include CMakeFiles/dlsim_tm4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dlsim_tm4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dlsim_tm4.dir/flags.make

/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_IDs.h: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_messages.txt
/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_IDs.h: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/LOG/vcd_signal_dumper.c
/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_IDs.h: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/LOG/vcd_signal_dumper.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_IDs.h"
	cd /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T && make check_vcd

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o: CMakeFiles/dlsim_tm4.dir/flags.make
CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o   -c /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c > CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.i

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.s

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.requires:

.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.requires

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.provides: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.requires
	$(MAKE) -f CMakeFiles/dlsim_tm4.dir/build.make CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.provides.build
.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.provides

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.provides.build: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o


CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o: CMakeFiles/dlsim_tm4.dir/flags.make
CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o   -c /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c > CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.i

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.s

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.requires:

.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.requires

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.provides: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.requires
	$(MAKE) -f CMakeFiles/dlsim_tm4.dir/build.make CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.provides.build
.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.provides

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.provides.build: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o


CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o: CMakeFiles/dlsim_tm4.dir/flags.make
CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o   -c /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c > CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.i

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.s

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.requires:

.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.requires

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.provides: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.requires
	$(MAKE) -f CMakeFiles/dlsim_tm4.dir/build.make CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.provides.build
.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.provides

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.provides.build: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o


CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o: CMakeFiles/dlsim_tm4.dir/flags.make
CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o   -c /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c > CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.i

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c -o CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.s

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.requires:

.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.requires

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.provides: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.requires
	$(MAKE) -f CMakeFiles/dlsim_tm4.dir/build.make CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.provides.build
.PHONY : CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.provides

CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.provides.build: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o


# Object files for target dlsim_tm4
dlsim_tm4_OBJECTS = \
"CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o" \
"CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o" \
"CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o" \
"CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o"

# External object files for target dlsim_tm4
dlsim_tm4_EXTERNAL_OBJECTS =

dlsim_tm4: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o
dlsim_tm4: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o
dlsim_tm4: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o
dlsim_tm4: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o
dlsim_tm4: CMakeFiles/dlsim_tm4.dir/build.make
dlsim_tm4: libSIMU_COMMON.a
dlsim_tm4: libSIMU.so
dlsim_tm4: libUTIL.a
dlsim_tm4: libSCHED_LIB.a
dlsim_tm4: libSCHED_RU_LIB.a
dlsim_tm4: libPHY.a
dlsim_tm4: libITTI.a
dlsim_tm4: libCONFIG_LIB.a
dlsim_tm4: CMakeFiles/dlsim_tm4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable dlsim_tm4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dlsim_tm4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dlsim_tm4.dir/build: dlsim_tm4

.PHONY : CMakeFiles/dlsim_tm4.dir/build

CMakeFiles/dlsim_tm4.dir/requires: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/SIMULATION/LTE_PHY/dlsim_tm4.c.o.requires
CMakeFiles/dlsim_tm4.dir/requires: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope_tm4.c.o.requires
CMakeFiles/dlsim_tm4.dir/requires: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T.c.o.requires
CMakeFiles/dlsim_tm4.dir/requires: CMakeFiles/dlsim_tm4.dir/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/local_tracer.c.o.requires

.PHONY : CMakeFiles/dlsim_tm4.dir/requires

CMakeFiles/dlsim_tm4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dlsim_tm4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dlsim_tm4.dir/clean

CMakeFiles/dlsim_tm4.dir/depend: /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/common/utils/T/T_IDs.h
	cd /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/dlsim_tm4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dlsim_tm4.dir/depend

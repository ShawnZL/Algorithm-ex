# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\ZZL\C\ACM\Chap_5\L5.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/L5_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L5_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L5_2.dir/flags.make

CMakeFiles/L5_2.dir/main.cpp.obj: CMakeFiles/L5_2.dir/flags.make
CMakeFiles/L5_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/L5_2.dir/main.cpp.obj"
	E:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\L5_2.dir\main.cpp.obj -c E:\ZZL\C\ACM\Chap_5\L5.2\main.cpp

CMakeFiles/L5_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L5_2.dir/main.cpp.i"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\ZZL\C\ACM\Chap_5\L5.2\main.cpp > CMakeFiles\L5_2.dir\main.cpp.i

CMakeFiles/L5_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L5_2.dir/main.cpp.s"
	E:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\ZZL\C\ACM\Chap_5\L5.2\main.cpp -o CMakeFiles\L5_2.dir\main.cpp.s

# Object files for target L5_2
L5_2_OBJECTS = \
"CMakeFiles/L5_2.dir/main.cpp.obj"

# External object files for target L5_2
L5_2_EXTERNAL_OBJECTS =

L5_2.exe: CMakeFiles/L5_2.dir/main.cpp.obj
L5_2.exe: CMakeFiles/L5_2.dir/build.make
L5_2.exe: CMakeFiles/L5_2.dir/linklibs.rsp
L5_2.exe: CMakeFiles/L5_2.dir/objects1.rsp
L5_2.exe: CMakeFiles/L5_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable L5_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\L5_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L5_2.dir/build: L5_2.exe

.PHONY : CMakeFiles/L5_2.dir/build

CMakeFiles/L5_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\L5_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/L5_2.dir/clean

CMakeFiles/L5_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\ZZL\C\ACM\Chap_5\L5.2 E:\ZZL\C\ACM\Chap_5\L5.2 E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug E:\ZZL\C\ACM\Chap_5\L5.2\cmake-build-debug\CMakeFiles\L5_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L5_2.dir/depend

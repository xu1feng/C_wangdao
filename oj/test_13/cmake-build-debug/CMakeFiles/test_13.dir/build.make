# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\c_code\oj\test_13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\c_code\oj\test_13\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_13.dir/flags.make

CMakeFiles/test_13.dir/main.c.obj: CMakeFiles/test_13.dir/flags.make
CMakeFiles/test_13.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\c_code\oj\test_13\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_13.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\test_13.dir\main.c.obj -c D:\c_code\oj\test_13\main.c

CMakeFiles/test_13.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_13.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\c_code\oj\test_13\main.c > CMakeFiles\test_13.dir\main.c.i

CMakeFiles/test_13.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_13.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\c_code\oj\test_13\main.c -o CMakeFiles\test_13.dir\main.c.s

# Object files for target test_13
test_13_OBJECTS = \
"CMakeFiles/test_13.dir/main.c.obj"

# External object files for target test_13
test_13_EXTERNAL_OBJECTS =

test_13.exe: CMakeFiles/test_13.dir/main.c.obj
test_13.exe: CMakeFiles/test_13.dir/build.make
test_13.exe: CMakeFiles/test_13.dir/linklibs.rsp
test_13.exe: CMakeFiles/test_13.dir/objects1.rsp
test_13.exe: CMakeFiles/test_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\c_code\oj\test_13\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_13.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_13.dir/build: test_13.exe

.PHONY : CMakeFiles/test_13.dir/build

CMakeFiles/test_13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_13.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_13.dir/clean

CMakeFiles/test_13.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\c_code\oj\test_13 D:\c_code\oj\test_13 D:\c_code\oj\test_13\cmake-build-debug D:\c_code\oj\test_13\cmake-build-debug D:\c_code\oj\test_13\cmake-build-debug\CMakeFiles\test_13.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_13.dir/depend


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
CMAKE_SOURCE_DIR = D:\c_code\408test\408_2019_41

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\c_code\408test\408_2019_41\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/408_2019_41.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/408_2019_41.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/408_2019_41.dir/flags.make

CMakeFiles/408_2019_41.dir/main.cpp.obj: CMakeFiles/408_2019_41.dir/flags.make
CMakeFiles/408_2019_41.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\c_code\408test\408_2019_41\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/408_2019_41.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\408_2019_41.dir\main.cpp.obj -c D:\c_code\408test\408_2019_41\main.cpp

CMakeFiles/408_2019_41.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/408_2019_41.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\c_code\408test\408_2019_41\main.cpp > CMakeFiles\408_2019_41.dir\main.cpp.i

CMakeFiles/408_2019_41.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/408_2019_41.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\c_code\408test\408_2019_41\main.cpp -o CMakeFiles\408_2019_41.dir\main.cpp.s

# Object files for target 408_2019_41
408_2019_41_OBJECTS = \
"CMakeFiles/408_2019_41.dir/main.cpp.obj"

# External object files for target 408_2019_41
408_2019_41_EXTERNAL_OBJECTS =

408_2019_41.exe: CMakeFiles/408_2019_41.dir/main.cpp.obj
408_2019_41.exe: CMakeFiles/408_2019_41.dir/build.make
408_2019_41.exe: CMakeFiles/408_2019_41.dir/linklibs.rsp
408_2019_41.exe: CMakeFiles/408_2019_41.dir/objects1.rsp
408_2019_41.exe: CMakeFiles/408_2019_41.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\c_code\408test\408_2019_41\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 408_2019_41.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\408_2019_41.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/408_2019_41.dir/build: 408_2019_41.exe

.PHONY : CMakeFiles/408_2019_41.dir/build

CMakeFiles/408_2019_41.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\408_2019_41.dir\cmake_clean.cmake
.PHONY : CMakeFiles/408_2019_41.dir/clean

CMakeFiles/408_2019_41.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\c_code\408test\408_2019_41 D:\c_code\408test\408_2019_41 D:\c_code\408test\408_2019_41\cmake-build-debug D:\c_code\408test\408_2019_41\cmake-build-debug D:\c_code\408test\408_2019_41\cmake-build-debug\CMakeFiles\408_2019_41.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/408_2019_41.dir/depend

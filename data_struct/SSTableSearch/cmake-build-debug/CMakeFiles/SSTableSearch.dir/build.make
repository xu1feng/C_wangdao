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
CMAKE_SOURCE_DIR = D:\c_code\data_struct\SSTableSearch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\c_code\data_struct\SSTableSearch\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SSTableSearch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SSTableSearch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SSTableSearch.dir/flags.make

CMakeFiles/SSTableSearch.dir/main.cpp.obj: CMakeFiles/SSTableSearch.dir/flags.make
CMakeFiles/SSTableSearch.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\c_code\data_struct\SSTableSearch\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SSTableSearch.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SSTableSearch.dir\main.cpp.obj -c D:\c_code\data_struct\SSTableSearch\main.cpp

CMakeFiles/SSTableSearch.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSTableSearch.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\c_code\data_struct\SSTableSearch\main.cpp > CMakeFiles\SSTableSearch.dir\main.cpp.i

CMakeFiles/SSTableSearch.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSTableSearch.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\c_code\data_struct\SSTableSearch\main.cpp -o CMakeFiles\SSTableSearch.dir\main.cpp.s

# Object files for target SSTableSearch
SSTableSearch_OBJECTS = \
"CMakeFiles/SSTableSearch.dir/main.cpp.obj"

# External object files for target SSTableSearch
SSTableSearch_EXTERNAL_OBJECTS =

SSTableSearch.exe: CMakeFiles/SSTableSearch.dir/main.cpp.obj
SSTableSearch.exe: CMakeFiles/SSTableSearch.dir/build.make
SSTableSearch.exe: CMakeFiles/SSTableSearch.dir/linklibs.rsp
SSTableSearch.exe: CMakeFiles/SSTableSearch.dir/objects1.rsp
SSTableSearch.exe: CMakeFiles/SSTableSearch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\c_code\data_struct\SSTableSearch\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SSTableSearch.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SSTableSearch.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SSTableSearch.dir/build: SSTableSearch.exe

.PHONY : CMakeFiles/SSTableSearch.dir/build

CMakeFiles/SSTableSearch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SSTableSearch.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SSTableSearch.dir/clean

CMakeFiles/SSTableSearch.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\c_code\data_struct\SSTableSearch D:\c_code\data_struct\SSTableSearch D:\c_code\data_struct\SSTableSearch\cmake-build-debug D:\c_code\data_struct\SSTableSearch\cmake-build-debug D:\c_code\data_struct\SSTableSearch\cmake-build-debug\CMakeFiles\SSTableSearch.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SSTableSearch.dir/depend


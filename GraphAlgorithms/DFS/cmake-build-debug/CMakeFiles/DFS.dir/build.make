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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\FacultyProjects\GraphAlgorithms\DFS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DFS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DFS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DFS.dir/flags.make

CMakeFiles/DFS.dir/main.cpp.obj: CMakeFiles/DFS.dir/flags.make
CMakeFiles/DFS.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DFS.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DFS.dir\main.cpp.obj -c D:\FacultyProjects\GraphAlgorithms\DFS\main.cpp

CMakeFiles/DFS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DFS.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\FacultyProjects\GraphAlgorithms\DFS\main.cpp > CMakeFiles\DFS.dir\main.cpp.i

CMakeFiles/DFS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DFS.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\FacultyProjects\GraphAlgorithms\DFS\main.cpp -o CMakeFiles\DFS.dir\main.cpp.s

CMakeFiles/DFS.dir/DFS.cpp.obj: CMakeFiles/DFS.dir/flags.make
CMakeFiles/DFS.dir/DFS.cpp.obj: ../DFS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DFS.dir/DFS.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DFS.dir\DFS.cpp.obj -c D:\FacultyProjects\GraphAlgorithms\DFS\DFS.cpp

CMakeFiles/DFS.dir/DFS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DFS.dir/DFS.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\FacultyProjects\GraphAlgorithms\DFS\DFS.cpp > CMakeFiles\DFS.dir\DFS.cpp.i

CMakeFiles/DFS.dir/DFS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DFS.dir/DFS.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\FacultyProjects\GraphAlgorithms\DFS\DFS.cpp -o CMakeFiles\DFS.dir\DFS.cpp.s

CMakeFiles/DFS.dir/adjacencyList.cpp.obj: CMakeFiles/DFS.dir/flags.make
CMakeFiles/DFS.dir/adjacencyList.cpp.obj: ../adjacencyList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DFS.dir/adjacencyList.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DFS.dir\adjacencyList.cpp.obj -c D:\FacultyProjects\GraphAlgorithms\DFS\adjacencyList.cpp

CMakeFiles/DFS.dir/adjacencyList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DFS.dir/adjacencyList.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\FacultyProjects\GraphAlgorithms\DFS\adjacencyList.cpp > CMakeFiles\DFS.dir\adjacencyList.cpp.i

CMakeFiles/DFS.dir/adjacencyList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DFS.dir/adjacencyList.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\FacultyProjects\GraphAlgorithms\DFS\adjacencyList.cpp -o CMakeFiles\DFS.dir\adjacencyList.cpp.s

# Object files for target DFS
DFS_OBJECTS = \
"CMakeFiles/DFS.dir/main.cpp.obj" \
"CMakeFiles/DFS.dir/DFS.cpp.obj" \
"CMakeFiles/DFS.dir/adjacencyList.cpp.obj"

# External object files for target DFS
DFS_EXTERNAL_OBJECTS =

DFS.exe: CMakeFiles/DFS.dir/main.cpp.obj
DFS.exe: CMakeFiles/DFS.dir/DFS.cpp.obj
DFS.exe: CMakeFiles/DFS.dir/adjacencyList.cpp.obj
DFS.exe: CMakeFiles/DFS.dir/build.make
DFS.exe: CMakeFiles/DFS.dir/linklibs.rsp
DFS.exe: CMakeFiles/DFS.dir/objects1.rsp
DFS.exe: CMakeFiles/DFS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable DFS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DFS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DFS.dir/build: DFS.exe

.PHONY : CMakeFiles/DFS.dir/build

CMakeFiles/DFS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DFS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DFS.dir/clean

CMakeFiles/DFS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\FacultyProjects\GraphAlgorithms\DFS D:\FacultyProjects\GraphAlgorithms\DFS D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug D:\FacultyProjects\GraphAlgorithms\DFS\cmake-build-debug\CMakeFiles\DFS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DFS.dir/depend


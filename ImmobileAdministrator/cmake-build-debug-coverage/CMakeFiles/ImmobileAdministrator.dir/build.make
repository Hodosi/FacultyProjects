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
CMAKE_SOURCE_DIR = D:\FacultyProjects\ImmobileAdministrator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/ImmobileAdministrator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ImmobileAdministrator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ImmobileAdministrator.dir/flags.make

CMakeFiles/ImmobileAdministrator.dir/main.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ImmobileAdministrator.dir/main.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\main.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\main.c

CMakeFiles/ImmobileAdministrator.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/main.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\main.c > CMakeFiles\ImmobileAdministrator.dir\main.c.i

CMakeFiles/ImmobileAdministrator.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/main.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\main.c -o CMakeFiles\ImmobileAdministrator.dir\main.c.s

CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.obj: ../presentation/userInterface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\presentation\userInterface.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\presentation\userInterface.c

CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\presentation\userInterface.c > CMakeFiles\ImmobileAdministrator.dir\presentation\userInterface.c.i

CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\presentation\userInterface.c -o CMakeFiles\ImmobileAdministrator.dir\presentation\userInterface.c.s

CMakeFiles/ImmobileAdministrator.dir/business/service.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/business/service.c.obj: ../business/service.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ImmobileAdministrator.dir/business/service.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\business\service.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\business\service.c

CMakeFiles/ImmobileAdministrator.dir/business/service.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/business/service.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\business\service.c > CMakeFiles\ImmobileAdministrator.dir\business\service.c.i

CMakeFiles/ImmobileAdministrator.dir/business/service.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/business/service.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\business\service.c -o CMakeFiles\ImmobileAdministrator.dir\business\service.c.s

CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.obj: ../persistence/repository.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\persistence\repository.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\persistence\repository.c

CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\persistence\repository.c > CMakeFiles\ImmobileAdministrator.dir\persistence\repository.c.i

CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\persistence\repository.c -o CMakeFiles\ImmobileAdministrator.dir\persistence\repository.c.s

CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.obj: ../validation/validator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\validation\validator.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\validation\validator.c

CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\validation\validator.c > CMakeFiles\ImmobileAdministrator.dir\validation\validator.c.i

CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\validation\validator.c -o CMakeFiles\ImmobileAdministrator.dir\validation\validator.c.s

CMakeFiles/ImmobileAdministrator.dir/test/test.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/test/test.c.obj: ../test/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ImmobileAdministrator.dir/test/test.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\test\test.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\test\test.c

CMakeFiles/ImmobileAdministrator.dir/test/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/test/test.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\test\test.c > CMakeFiles\ImmobileAdministrator.dir\test\test.c.i

CMakeFiles/ImmobileAdministrator.dir/test/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/test/test.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\test\test.c -o CMakeFiles\ImmobileAdministrator.dir\test\test.c.s

CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.obj: ../domain/expense.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\domain\expense.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\domain\expense.c

CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\domain\expense.c > CMakeFiles\ImmobileAdministrator.dir\domain\expense.c.i

CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\domain\expense.c -o CMakeFiles\ImmobileAdministrator.dir\domain\expense.c.s

CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.obj: ../domain/apartment.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\domain\apartment.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\domain\apartment.c

CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\domain\apartment.c > CMakeFiles\ImmobileAdministrator.dir\domain\apartment.c.i

CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\domain\apartment.c -o CMakeFiles\ImmobileAdministrator.dir\domain\apartment.c.s

CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.obj: CMakeFiles/ImmobileAdministrator.dir/flags.make
CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.obj: ../persistence/dynamicVector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ImmobileAdministrator.dir\persistence\dynamicVector.c.obj   -c D:\FacultyProjects\ImmobileAdministrator\persistence\dynamicVector.c

CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\FacultyProjects\ImmobileAdministrator\persistence\dynamicVector.c > CMakeFiles\ImmobileAdministrator.dir\persistence\dynamicVector.c.i

CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\FacultyProjects\ImmobileAdministrator\persistence\dynamicVector.c -o CMakeFiles\ImmobileAdministrator.dir\persistence\dynamicVector.c.s

# Object files for target ImmobileAdministrator
ImmobileAdministrator_OBJECTS = \
"CMakeFiles/ImmobileAdministrator.dir/main.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/business/service.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/test/test.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.obj" \
"CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.obj"

# External object files for target ImmobileAdministrator
ImmobileAdministrator_EXTERNAL_OBJECTS =

ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/main.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/presentation/userInterface.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/business/service.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/persistence/repository.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/validation/validator.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/test/test.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/domain/expense.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/domain/apartment.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/persistence/dynamicVector.c.obj
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/build.make
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/linklibs.rsp
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/objects1.rsp
ImmobileAdministrator.exe: CMakeFiles/ImmobileAdministrator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable ImmobileAdministrator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ImmobileAdministrator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ImmobileAdministrator.dir/build: ImmobileAdministrator.exe

.PHONY : CMakeFiles/ImmobileAdministrator.dir/build

CMakeFiles/ImmobileAdministrator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ImmobileAdministrator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ImmobileAdministrator.dir/clean

CMakeFiles/ImmobileAdministrator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\FacultyProjects\ImmobileAdministrator D:\FacultyProjects\ImmobileAdministrator D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage D:\FacultyProjects\ImmobileAdministrator\cmake-build-debug-coverage\CMakeFiles\ImmobileAdministrator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ImmobileAdministrator.dir/depend


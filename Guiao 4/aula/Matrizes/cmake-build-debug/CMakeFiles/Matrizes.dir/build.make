# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Matrizes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matrizes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matrizes.dir/flags.make

CMakeFiles/Matrizes.dir/main.c.obj: CMakeFiles/Matrizes.dir/flags.make
CMakeFiles/Matrizes.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Matrizes.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Matrizes.dir\main.c.obj   -c "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\main.c"

CMakeFiles/Matrizes.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Matrizes.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\main.c" > CMakeFiles\Matrizes.dir\main.c.i

CMakeFiles/Matrizes.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Matrizes.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\main.c" -o CMakeFiles\Matrizes.dir\main.c.s

# Object files for target Matrizes
Matrizes_OBJECTS = \
"CMakeFiles/Matrizes.dir/main.c.obj"

# External object files for target Matrizes
Matrizes_EXTERNAL_OBJECTS =

Matrizes.exe: CMakeFiles/Matrizes.dir/main.c.obj
Matrizes.exe: CMakeFiles/Matrizes.dir/build.make
Matrizes.exe: CMakeFiles/Matrizes.dir/linklibs.rsp
Matrizes.exe: CMakeFiles/Matrizes.dir/objects1.rsp
Matrizes.exe: CMakeFiles/Matrizes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Matrizes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Matrizes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matrizes.dir/build: Matrizes.exe

.PHONY : CMakeFiles/Matrizes.dir/build

CMakeFiles/Matrizes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Matrizes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Matrizes.dir/clean

CMakeFiles/Matrizes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes" "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes" "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug" "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug" "C:\Users\Victor\Desktop\Projetos algoritmos\guiao 4\aula\Matrizes\cmake-build-debug\CMakeFiles\Matrizes.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Matrizes.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cv3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cv3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cv3.dir/flags.make

CMakeFiles/cv3.dir/main.c.obj: CMakeFiles/cv3.dir/flags.make
CMakeFiles/cv3.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cv3.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cv3.dir\main.c.obj   -c D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\main.c

CMakeFiles/cv3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cv3.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\main.c > CMakeFiles\cv3.dir\main.c.i

CMakeFiles/cv3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cv3.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\main.c -o CMakeFiles\cv3.dir\main.c.s

CMakeFiles/cv3.dir/main.c.obj.requires:

.PHONY : CMakeFiles/cv3.dir/main.c.obj.requires

CMakeFiles/cv3.dir/main.c.obj.provides: CMakeFiles/cv3.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\cv3.dir\build.make CMakeFiles/cv3.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/cv3.dir/main.c.obj.provides

CMakeFiles/cv3.dir/main.c.obj.provides.build: CMakeFiles/cv3.dir/main.c.obj


# Object files for target cv3
cv3_OBJECTS = \
"CMakeFiles/cv3.dir/main.c.obj"

# External object files for target cv3
cv3_EXTERNAL_OBJECTS =

cv3.exe: CMakeFiles/cv3.dir/main.c.obj
cv3.exe: CMakeFiles/cv3.dir/build.make
cv3.exe: CMakeFiles/cv3.dir/linklibs.rsp
cv3.exe: CMakeFiles/cv3.dir/objects1.rsp
cv3.exe: CMakeFiles/cv3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cv3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cv3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cv3.dir/build: cv3.exe

.PHONY : CMakeFiles/cv3.dir/build

CMakeFiles/cv3.dir/requires: CMakeFiles/cv3.dir/main.c.obj.requires

.PHONY : CMakeFiles/cv3.dir/requires

CMakeFiles/cv3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cv3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cv3.dir/clean

CMakeFiles/cv3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3 D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3 D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug D:\_EDUCANET\1_A_PRG\PraceSeSoubory\cv3\cmake-build-debug\CMakeFiles\cv3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cv3.dir/depend


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
CMAKE_SOURCE_DIR = D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cv2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cv2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cv2.dir/flags.make

CMakeFiles/cv2.dir/main.c.obj: CMakeFiles/cv2.dir/flags.make
CMakeFiles/cv2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cv2.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cv2.dir\main.c.obj   -c D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\main.c

CMakeFiles/cv2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cv2.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\main.c > CMakeFiles\cv2.dir\main.c.i

CMakeFiles/cv2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cv2.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\main.c -o CMakeFiles\cv2.dir\main.c.s

CMakeFiles/cv2.dir/main.c.obj.requires:

.PHONY : CMakeFiles/cv2.dir/main.c.obj.requires

CMakeFiles/cv2.dir/main.c.obj.provides: CMakeFiles/cv2.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\cv2.dir\build.make CMakeFiles/cv2.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/cv2.dir/main.c.obj.provides

CMakeFiles/cv2.dir/main.c.obj.provides.build: CMakeFiles/cv2.dir/main.c.obj


# Object files for target cv2
cv2_OBJECTS = \
"CMakeFiles/cv2.dir/main.c.obj"

# External object files for target cv2
cv2_EXTERNAL_OBJECTS =

cv2.exe: CMakeFiles/cv2.dir/main.c.obj
cv2.exe: CMakeFiles/cv2.dir/build.make
cv2.exe: CMakeFiles/cv2.dir/linklibs.rsp
cv2.exe: CMakeFiles/cv2.dir/objects1.rsp
cv2.exe: CMakeFiles/cv2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cv2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cv2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cv2.dir/build: cv2.exe

.PHONY : CMakeFiles/cv2.dir/build

CMakeFiles/cv2.dir/requires: CMakeFiles/cv2.dir/main.c.obj.requires

.PHONY : CMakeFiles/cv2.dir/requires

CMakeFiles/cv2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cv2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cv2.dir/clean

CMakeFiles/cv2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2 D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2 D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug D:\_EDUCANET\1_A_PRG\RidiciStruktury\cv2\cmake-build-debug\CMakeFiles\cv2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cv2.dir/depend


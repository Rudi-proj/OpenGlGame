# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rudi/Development/OpenGlGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rudi/Development/OpenGlGame/build

# Include any dependencies generated for this target.
include CMakeFiles/myGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myGame.dir/flags.make

CMakeFiles/myGame.dir/glad.c.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/glad.c.o: ../glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rudi/Development/OpenGlGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/myGame.dir/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/myGame.dir/glad.c.o -c /home/rudi/Development/OpenGlGame/glad.c

CMakeFiles/myGame.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/myGame.dir/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rudi/Development/OpenGlGame/glad.c > CMakeFiles/myGame.dir/glad.c.i

CMakeFiles/myGame.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/myGame.dir/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rudi/Development/OpenGlGame/glad.c -o CMakeFiles/myGame.dir/glad.c.s

CMakeFiles/myGame.dir/main.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rudi/Development/OpenGlGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myGame.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myGame.dir/main.cpp.o -c /home/rudi/Development/OpenGlGame/main.cpp

CMakeFiles/myGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rudi/Development/OpenGlGame/main.cpp > CMakeFiles/myGame.dir/main.cpp.i

CMakeFiles/myGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rudi/Development/OpenGlGame/main.cpp -o CMakeFiles/myGame.dir/main.cpp.s

# Object files for target myGame
myGame_OBJECTS = \
"CMakeFiles/myGame.dir/glad.c.o" \
"CMakeFiles/myGame.dir/main.cpp.o"

# External object files for target myGame
myGame_EXTERNAL_OBJECTS =

myGame: CMakeFiles/myGame.dir/glad.c.o
myGame: CMakeFiles/myGame.dir/main.cpp.o
myGame: CMakeFiles/myGame.dir/build.make
myGame: CMakeFiles/myGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rudi/Development/OpenGlGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable myGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myGame.dir/build: myGame

.PHONY : CMakeFiles/myGame.dir/build

CMakeFiles/myGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myGame.dir/clean

CMakeFiles/myGame.dir/depend:
	cd /home/rudi/Development/OpenGlGame/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rudi/Development/OpenGlGame /home/rudi/Development/OpenGlGame /home/rudi/Development/OpenGlGame/build /home/rudi/Development/OpenGlGame/build /home/rudi/Development/OpenGlGame/build/CMakeFiles/myGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myGame.dir/depend

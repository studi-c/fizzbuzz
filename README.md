# fizzbuzz
# a toy project to learn and test simple uses of CMake

A toy project

    CMake -G"Visual Studio 15 2017 Win64"

Produces a satisfactory visual studio project file, that includes my custom include directory and employs the correct startup subproject.

    CMAKE -G"NMake Makefiles"
    nmake -f Makefile

Builds the project from the command line.

Getting CMake to build a satisfactory visual studio solution file is considerably more complex than getting it to build a satisfactory makefile, but better to do it this way in a project intended to run cross platform

# fizzbuzz
# a toy project to learn and test simple uses of CMake

A toy project


    CMAKE -G"NMake Makefiles"
    nmake -f Makefile
	fizzbuzz

Builds the project from the command line.

To build a Visual Studio Solution file:

    CMake -G "Visual Studio 15 2017 Win64"
	fizzbuzz.sln

Produces a satisfactory visual studio project file, that includes my custom include directory and employs the correct startup subproject.

Getting CMake to build a satisfactory visual studio solution file is considerably more complex than getting it to build a satisfactory makefile, but better to do it this way in a project intended to run cross platform

CMake adds ..\..\include to the search path, and the header files expect to find gsl there.




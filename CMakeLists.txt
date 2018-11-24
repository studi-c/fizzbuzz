cmake_minimum_required(VERSION 3.12)
project (fizzbuzz)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
find_path(
    MISC_INCLUDE
    NAMES "gsl/gsl"
    PATHS ../..
	PATH_SUFFIXES Include
	NO_DEFAULT_PATH
)
if (	NOT EXISTS "${MISC_INCLUDE}/gsl/gsl"
	)
	message ("expected to find Guidelines Support Library")
	message ("expected to find headers ../../include/gsl/gsl")
	#error message covers the include directory found, but gsl not found
    message(SEND_ERROR "MISC_INCLUDE => ${MISC_INCLUDE}")
	#error message covers the include directory not found
	return()
endif ()
set_property( DIRECTORY PROPERTY VS_STARTUP_PROJECT "fizzbuzz" )
include_directories("${MISC_INCLUDE}")
# add_executable(test ${SOURCES})
add_executable(fizzbuzz fizzbuzz.cpp stdafx.h)


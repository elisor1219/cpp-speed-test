# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(CPP_speed_test)

# Add the source files to the project
add_executable(CPP_speed_test.out main.cpp classes/TheTester.cpp classes/TestOne.cpp classes/TestTwo.cpp)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Include the header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Link any necessary libraries
#target_link_libraries(CPP_speed_test <library_name>)

# Set any necessary compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++ -O3")
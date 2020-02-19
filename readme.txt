This repository will contain simple examples demonstrating use of cmake to create executables, small projects, libraries etc. 

simple example (creating executable) 
---------------
Create an empty directory for your project.
Add some simple cpp file in it. say for computing factorial of a number. save it as factorial.cpp
create CMakeLists.txt file and add following lines in it

cmake_minimum_required(VERSION 3.10)
project(examples)
add_executable(factorial factorial.cpp)

now create build project in your folder
mkdir build
go inside build folder
cd build
and now use cmake to create your project using cmake system.
cmake ../
now build your project
cmake --build .

This will build your project using default cmpiler on your system
and it should product factorial.exe in debug folder. 

creating library
-------------------
add another file containing only a function. 
add another entry in CMakeLists.txt 
add_library(factlib factlib.cpp)

and now use cmake system. 
this should build and create factlib.lib file as output. 

creating library in subdirectory
---------------------------------
create a new project repeating steps in simple example
now create subdirectory factlib
inside sub directory create factlib.h and factlib.cpp files and CMakeLists.txt
add recursive function in cpp file and CMakeLists.txt should contain just following statement

cmake_minimum_required(VERISON 3.10)
add_library(factlib factlib.cpp)

In Main project CMakeLists file add following statements

add_subdirectory(factlib)

target_include_directories(factorial PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/factlib"
)

target_link_libraries(factorial PUBLIC factlib)





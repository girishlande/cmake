cmake_minimum_required(VERSION 3.10)

project(examples)

add_executable(factorial factorial.cpp)

add_subdirectory(factlib)

target_include_directories(factorial PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/factlib"
)

target_link_libraries(factorial PUBLIC factlib)


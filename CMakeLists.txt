cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(
    "SetUpProject"
    VERSION 1.0.0
    DESCRIPTION "Project 0 OSII 2024"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

target_link_libraries(${PROJECT_NAME} DynaLib StaLib)
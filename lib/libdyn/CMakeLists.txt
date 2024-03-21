cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(
    "DynaLib"
    VERSION 1.0.0
    DESCRIPTION "Project 0 OSII 2024"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} SHARED ${SOURCES})

cmake_minimum_required(VERSION 3.12)
project(MF52AT_Test C)

# This CMakeLists.txt is for testing purposes only.
add_compile_definitions(TESTING)

# Collect all source files
set(SOURCES
    MF52AT_3950.c
    MF52AT_Test.c)
add_executable(MF52AT_Test ${SOURCES})

# Setup testing
enable_testing()
include(CTest)

add_test(
    NAME MF52AT_UnitTest
    COMMAND MF52AT_Test
)

cmake_minimum_required(VERSION 3.17)
project(testproj)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(doctest
        GIT_REPOSITORY "https://github.com/onqtam/doctest.git"
        GIT_TAG 2.4.1)

FetchContent_MakeAvailable(doctest)
enable_testing()

# Put code that is used by both testproj and testproj_tests
# in to a library. This way, these files will only be compiled once,
# but linked in to both executables.
add_library(testproj_lib util.cpp util.h)

add_executable(testproj main.cpp)
target_link_libraries(testproj testproj_lib)

set(TEST_SRC tests/test.cpp tests/util.test.cpp)
add_executable(testproj_tests ${TEST_SRC})
target_link_libraries(testproj_tests testproj_lib doctest::doctest)
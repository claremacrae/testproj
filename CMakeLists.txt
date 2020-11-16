cmake_minimum_required(VERSION 3.17)
project(testproj)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(doctest
        GIT_REPOSITORY "https://github.com/onqtam/doctest.git"
        GIT_TAG 2.4.1)

FetchContent_MakeAvailable(doctest)
enable_testing()

set(PROJ_SRC util.cpp util.h)
set(TEST_SRC tests/test.cpp tests/util.test.cpp)

add_executable(testproj main.cpp ${PROJ_SRC})

add_executable(testproj_tests ${TEST_SRC} ${PROJ_SRC})
target_link_libraries(testproj_tests doctest::doctest)
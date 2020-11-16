cmake_minimum_required(VERSION 3.17)
project(testproj)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(doctest
        GIT_REPOSITORY "https://github.com/onqtam/doctest.git"
        GIT_TAG 2.4.1)

FetchContent_MakeAvailable(doctest)
enable_testing()

add_subdirectory(testproj_lib)

add_executable(testproj main.cpp)
target_link_libraries(testproj testproj_lib)

add_subdirectory(tests)

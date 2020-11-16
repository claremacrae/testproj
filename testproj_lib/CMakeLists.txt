# Put code that is used by both testproj and testproj_tests
# in to a library. This way, these files will only be compiled once,
# but linked in to both executables.
add_library(testproj_lib util.cpp util.h)

# Enable any code that depends on this library to find the .h files
# in this directory automatically, without needing to specify the
# relative path in source code
target_include_directories(testproj_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

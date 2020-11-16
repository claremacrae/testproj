# Put code that is used by both testproj and testproj_tests
# in to a library. This way, these files will only be compiled once,
# but linked in to both executables.
add_library(testproj_lib util.cpp util.h)

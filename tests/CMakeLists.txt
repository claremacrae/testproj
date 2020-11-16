set(TEST_SRC test.cpp util.test.cpp)
add_executable(testproj_tests ${TEST_SRC})
target_link_libraries(testproj_tests testproj_lib doctest::doctest)
add_test(
        NAME testproj_tests
        COMMAND testproj_tests)

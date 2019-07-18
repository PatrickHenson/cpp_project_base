set(PROJECT_UNIT_TESTS "run_unit_tests")

set(SOURCES ${SOURCES}

)

# Create executable to run unit tests
add_executable(${PROJECT_UNIT_TESTS} main.cpp ${SOURCES})

# Link project source library
target_link_libraries(${PROJECT_UNIT_TESTS} PROJECT_LIB)

# Link Google Test
add_dependencies(${PROJECT_UNIT_TESTS} gtest)
target_link_libraries(${PROJECT_UNIT_TESTS} gtest_main)

add_test(
  NAME ${PROJECT_UNIT_TESTS}
  COMMAND ${PROJECT_UNIT_TESTS}
)

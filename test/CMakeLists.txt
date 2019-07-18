set(PROJECT_UNIT_TESTS "run_unit_tests")

set(SOURCES ${SOURCES}

)

add_executable(${PROJECT_UNIT_TESTS} main.cpp ${SOURCES})

add_dependencies(${PROJECT_UNIT_TESTS} gtest)
target_link_libraries(${PROJECT_UNIT_TESTS} gtest_main)

add_test(
  NAME ${PROJECT_UNIT_TESTS}
  COMMAND ${PROJECT_UNIT_TESTS}
)

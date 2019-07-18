SET (SOURCES
  
)

###################################
# Find packages and libraries necessary for project


###################################
# Project library used to compile executable and tests
add_library(PROJECT_LIB STATIC ${SOURCES})
target_include_directories(PROJECT_LIB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link necessary packages and libraries to PROJECT_LIB

###################################
# Generate project executable
add_executable(${PROJECT_NAME} main.cpp)

# Link project source to executable
target_link_libraries(${PROJECT_NAME} PROJECT_LIB)

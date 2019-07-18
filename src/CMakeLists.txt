SET (SOURCES ${SOURCES}
  
)

###################################
# Find packages and libraries necessary for project

###################################
# Generate project executable
add_executable(${PROJECT_NAME} main.cpp ${SOURCES})

# Link libraries...

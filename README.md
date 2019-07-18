# cpp_project_base

This repository contains a minimal project build environment to make it easy to start a new project without manually configuring.

# Project Structure
/root
-/src
-/test

## Build
```
cd cpp_project_base
mkdir build
cd build
cmake ..
make
```

## Run
The project executable is located in the /bin directory.

## Test
All unit tests are compiled and run using the provided 'run_unit_tests' executable in the /bin directory.

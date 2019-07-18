# cpp_project_base

This repository contains a minimal c++ project build environment to enable quickly launching new projects.

Google test is automatically downloaded, compiled, and linked inside this project.  This allows for immediate unit test support, however, for a large number of projects it may make sense to link to an external google test library.

## Requirements

* gcc

* CMake


## Project Structure
/cpp_project_base

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

## License 

This project is available as open source under the terms of the [Apache 2.0 License](https://opensource.org/licenses/Apache-2.0)

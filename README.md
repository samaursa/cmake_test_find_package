# cmake_test_find_package
Simple CMake project that pairs up with cmake_test_lib to show how to create CMakeLists.txt to export/import CMake libraries easily.

This pairs up with [cmake_test_lib](https://github.com/samaursa/cmake_test_lib) project which shows how to export a library and import it easily with another `CMake` project.

# Building

Make sure you have cloned and run `make install` on [cmake_test_lib](https://github.com/samaursa/cmake_test_lib).

Simply run 
```
mkdir build
cd build
cmake ../
make
```
or, if you did _not_ `make install` the `cmake_test_lib` linked above, then you need to manually specify the build directory
```
cmake ../ -DLibA_DIR=/path/to/LibA/build/
make
```
# Notes

Instead of manually cloning [cmake_test_lib](https://github.com/samaursa/cmake_test_lib), you can use `ExternalProject_Add` command to clone, build and install the repository.

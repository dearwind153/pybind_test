cmake_minimum_required(VERSION 3.10)
project(example)

# you may need these 2 lines, and set your own paths
# set(PYTHON_EXECUTABLE "/Users/xxx/anaconda3/bin/python")
# set(PYTHON_INCLUDE_DIRECTORY "/Users/xxx/anaconda3/include/python3.11")

add_subdirectory(extern/pybind11)
pybind11_add_module(class_test class_test.cc)

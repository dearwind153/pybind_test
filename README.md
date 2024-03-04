# pybind_test
# warper c++ to python module

1. mkdir build && cd build

2. cmake ../ && make

3. python3

	$ import class_test

	$ my_instance = example.MyClass(42)
	$ print(my_instance.get_value())  # 输出: 42
	$ my_instance.set_value(27)
	$ print(my_instance.get_value())  # 输出: 27


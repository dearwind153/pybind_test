// 假设你有一个 C++ 类 MyClass
class MyClass {
public:
    MyClass(int value) : m_value(value) {}
    int get_value() const { return m_value; }
    void set_value(int value) { m_value = value; }

private:
    int m_value;
};

// 使用 Pybind11 封装这个类
#include <pybind11/pybind11.h>

PYBIND11_MODULE(class_test, m) {
    pybind11::class_<MyClass>(m, "MyClass") // 在 Python 中，MyClass 将被绑定为名为 "MyClass"
        .def(pybind11::init<int>(), // 绑定构造函数，参数类型为 int
             "Initialize the class with a given value")
        .def("get_value", &MyClass::get_value, // 绑定成员函数 get_value
             "Return the stored value")
        .def("set_value", &MyClass::set_value, // 绑定成员函数 set_value
             "Set the stored value",
             pybind11::arg("value")); // 参数名为 "value"

    // 也可以定义属性直接访问 private 成员变量（如果需要的话）
    // .def_property("value", &MyClass::get_value, &MyClass::set_value);
}

// 编译后，在 Python 环境中就可以像使用普通 Python 类一样使用 MyClass
/*# In Python:
import class_test

my_instance = example.MyClass(42)
print(my_instance.get_value())  # 输出: 42
my_instance.set_value(27)
print(my_instance.get_value())  # 输出: 27
*/

pushd `pwd`
mkdir extern
cd extern
git clone https://github.com/pybind/pybind11.git
popd

mkdir build
cd build
cmake .. && make





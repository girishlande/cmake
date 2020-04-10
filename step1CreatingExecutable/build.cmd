@echo off

mkdir build

pushd build
cmake ../
cmake --build . --config Release
cmake --build . --config Debug
popd

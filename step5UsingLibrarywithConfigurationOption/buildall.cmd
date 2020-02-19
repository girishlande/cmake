@echo off

mkdir build

pushd build

cmake ../

cmake --build .

popd

popd


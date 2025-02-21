cmake_minimum_required(VERSION 3.21)
project(SomeApp)

add_subdirectory(deps/cmake-git-hash)

include(CTest)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

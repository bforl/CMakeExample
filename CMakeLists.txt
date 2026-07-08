cmake_minimum_required (VERSION 3.10)

project ("CMakeProject1")

find_package(fmt CONFIG REQUIRED)

add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")



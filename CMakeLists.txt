cmake_minimum_required (VERSION 3.10)

project ("CMakeProject1")

find_package(fmt CONFIG REQUIRED)
find_package(Boost REQUIRED COMPONENTS system serialization graph iostreams filesystem process)

add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")

target_link_libraries(CMakeProject1 PRIVATE fmt::fmt)

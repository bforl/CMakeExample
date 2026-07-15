cmake_minimum_required (VERSION 3.10)

project ("CMakeProject1")

find_package(fmt CONFIG REQUIRED)
find_package(magic_enum CONFIG REQUIRED)
find_package(date CONFIG REQUIRED)
find_package(Boost REQUIRED COMPONENTS serialization)

add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")

target_link_libraries(CMakeProject1 PRIVATE
    Boost::serialization
    fmt::fmt
    magic_enum::magic_enum
    date::date
)

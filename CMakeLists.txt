cmake_minimum_required(VERSION 3.1)

project(MyExeProj)

find_package(LibA)

add_executable(MyExe
  src/main.cpp
  )

target_link_libraries(MyExe
  PRIVATE
    LibA
  )

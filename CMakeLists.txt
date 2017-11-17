cmake_minimum_required(VERSION 3.1)

project(MyExeProj)

find_package(LibA)

add_executable(MyExe
  main.cpp
  )

message(STATUS ${LibA_INCLUDE_DIRS})

target_link_libraries(MyExe
  LibA
  )

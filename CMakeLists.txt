cmake_minimum_required(VERSION 3.22)
project(MyListImplementation)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyListImplementation main.cpp MyList.h MyString.cpp MyString.h)

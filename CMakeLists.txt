cmake_minimum_required(VERSION 2.6)
project(codeforces)

add_executable(codeforces main.cpp)

install(TARGETS codeforces RUNTIME DESTINATION bin)

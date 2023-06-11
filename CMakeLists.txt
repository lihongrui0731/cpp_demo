cmake_minimum_required(VERSION 3.25)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp Log.cpp Math.h Math.cpp Log.h FrequencyDomain/FrequencyDomain.cpp FrequencyDomain/FrequencyDomain.h DataStruct.h)

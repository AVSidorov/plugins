cmake_minimum_required(VERSION 3.23)
project(plugin)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(plugin_hello)
add_subdirectory(plugin_echo)
add_subdirectory(plugin_App)

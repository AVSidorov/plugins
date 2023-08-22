cmake_minimum_required(VERSION 3.23)
set(VCPKG_OVERLAY_PORTS ${CMAKE_CURRENT_LIST_DIR}/plugin_qwt/overlays)
#set(ENV{VCPKG_KEEP_ENV_VARS} Qt5_DIR)
#set(VCPKG_KEEP_ENV_VARS Qt5_DIR)

project(plugin)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(plugin_hello)
add_subdirectory(plugin_echo)
add_subdirectory(plugin_widget)
add_subdirectory(plugin_qwt)
add_subdirectory(plugin_App)

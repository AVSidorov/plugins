cmake_minimum_required(VERSION 3.23)
project(plugin_App)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(${PROJECT_NAME} 
     src/main.cpp
     src/mainwindow.cpp
     src/mainwindow.h
     src/mainwindow.ui
     src/helloPluginInterface.h
)

target_include_directories(${PROJECT_NAME} PRIVATE src/)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Core Qt::Gui Qt::Widgets 
)

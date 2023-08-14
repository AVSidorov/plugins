cmake_minimum_required(VERSION 3.2.23)
project(helloPlugin)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

#add_library(${PROJECT_NAME} MODULE 
#	src/helloPlugin.cpp
#)
qt_add_plugin(${PROJECT_NAME}
              SHARED
	src/helloPlugin.h
	src/helloPlugin.cpp
	../plugin_App/src/helloPluginInterface.h
)

target_include_directories(${PROJECT_NAME} PRIVATE src/)
target_include_directories(${PROJECT_NAME} PRIVATE ../plugin_App/src/)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Core Qt::Gui Qt::Widgets)

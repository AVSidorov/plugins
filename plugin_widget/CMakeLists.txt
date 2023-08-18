cmake_minimum_required(VERSION 3.2.23)
project(widgetPlugin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOON ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_library(${PROJECT_NAME} SHARED
    src/widgetPlugin.cpp
        src/helloWidget.cpp
        src/helloWidget.ui
)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src/)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/../plugin_App/src/)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt::Widgets
)

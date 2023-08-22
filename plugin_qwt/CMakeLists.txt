cmake_minimum_required(VERSION 3.25)

set(VCPKG_OVERLAY_PORTS ${CMAKE_CURRENT_LIST_DIR}/overlays)
message("VCPKG_OVERLAY_PORTS ${VCPKG_OVERLAY_PORTS}")

project(qwtWidget)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)

find_package(Qt5
        COMPONENTS
        Widgets
        REQUIRED
)

find_package(Qwt REQUIRED)

add_library(${PROJECT_NAME} SHARED
        src/Plot.cpp
        src/PlotWindow.cpp
        src/QwtPlugin.cpp
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        Qt::Widgets
        Qwt::qwt
        )

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src/)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/../plugin_App/src/)

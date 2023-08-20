cmake_minimum_required(VERSION 3.25)
set(VCPKG_OVERLAY_PORTS ${CMAKE_CURRENT_LIST_DIR}/overlays)
project(polarspectrogram)


set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)

find_package(Qt5
        COMPONENTS
        Widgets
        REQUIRED
)

find_package(Qwt REQUIRED)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/Plot.cpp
        src/PlotWindow.cpp
        src/Plot.h
        src/PlotWindow.h
)


target_link_libraries(${PROJECT_NAME}
        PRIVATE
        Qt::Widgets
        Qwt::qwt
)
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
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-Wl,-rpath,../lib,-rpath,./")

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        Qt::Widgets
        PUBLIC
        Qwt::qwt
)

#SET(CMAKE_BUILD_RPATH_USE_ORIGIN TRUE)
#
## use, i.e. don't skip the full RPATH for the build tree
#SET(CMAKE_SKIP_BUILD_RPATH  FALSE)
#
## when building, don't use the install RPATH already
## (but later on when installing)
#SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
#
## the RPATH to be used when installing
#SET(CMAKE_INSTALL_RPATH "")
#
## don't add the automatically determined parts of the RPATH
## which point to directories outside the build tree to the install RPATH
#SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH FALSE)
#


#SET(CMAKE_BUILD_RPATH_USE_ORIGIN TRUE)
#
### Find shared libraries next to the executable
#set_target_properties(${PROJECT_NAME} PROPERTIES
#        BUILD_WITH_INSTALL_RPATH FALSE
#        LINK_FLAGS "-Wl,-rpath,$ORIGIN/lib"
#        )

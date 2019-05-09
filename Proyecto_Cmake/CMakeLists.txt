cmake_minimum_required(VERSION 2.8)

project(Proyecto_Cmake)
find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME} "main.cpp" "control.h" "control.cpp" "control.ui" "leds.h"
    "leds.cpp" "leds.ui" "register.h" "register.cpp" "register.ui")

target_link_libraries (${PROJECT_NAME} sqlite3 mysqlclient Qt5::Core Qt5::gui Qt5::Widgets Qt5::Sql)

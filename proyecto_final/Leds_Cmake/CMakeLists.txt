cmake_minimum_required(VERSION 2.8)

project(Leds_Cmake)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME}_gui "main.cpp" "leds.ui" "leds.cpp" "leds.h" "register.ui" "register.cpp" "register.h"
    "control.ui" "control.cpp" "control.h" "db_local.h" "db_local.cpp")

target_link_libraries (${PROJECT_NAME}_gui sqlite3 Qt5::Core Qt5::Widgets wiringPi)


cmake_minimum_required(VERSION 3.14)

project(ocv_task LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6Core)

include_directories(/usr/local/include/opencv4)
include_directories(/usr/local/include/opencv4/opencv2/core)
include_directories(/usr/local/include/opencv4/opencv2)
include_directories(/usr/local/include/opencv4/opencv2/highgui)

add_executable(ocv_task
  main.cpp
)
target_link_libraries(ocv_task Qt${QT_VERSION_MAJOR}::Core)

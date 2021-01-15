cmake_minimum_required(VERSION 3.14)

project(ocv_task LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)
find_package(Qt6Core)

find_package( OpenCV REQUIRED )
if( OpenCV_FOUND )
list( APPEND ThirdParty_LIBS ${OpenCV_LIBS} )
    include_directories( ${OpenCV_INCLUDE_DIRS} )
endif( OpenCV_FOUND )

include_directories(/usr/local/include/opencv4)
include_directories(/usr/local/include/opencv4/opencv2/core)
include_directories(/usr/local/include/opencv4/opencv2)
include_directories(/usr/local/include/opencv4/opencv2/highgui)

add_executable(ocv_task
  main.cpp
  terminal.h
  terminal.cpp
  img_handler.h
  img_handler.cpp
  behavior.h
  behavior.cpp
)
target_link_libraries(ocv_task Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

cmake_minimum_required(VERSION 3.16)
project(FiveM-Security-Scanner)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/core/ScannerEngine.cpp
)

target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Widgets)

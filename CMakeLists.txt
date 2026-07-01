cmake_minimum_required(VERSION 3.20)
project(Shooter)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR
        "C:/Users/eriii/Downloads/SFML-3.1.0-windows-gcc-14.2.0-mingw-64-bit/SFML-3.1.0/lib/cmake/SFML"
)

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

add_executable(Shooter src/Main/main.cpp
        src/window/window.cpp
        src/window/window.h
        src/constants/Constants.h)

target_link_libraries(Shooter PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
)
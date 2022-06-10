cmake_minimum_required(VERSION 3.16)

set(CMAKE_PREFIX_PATH "D:\\Qt\\Qt5.12.9\\5.12.9\\msvc2015_64\\lib\\cmake")

project(helloworld VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core)
#qt_standard_project_setup()

add_executable(helloworld
    main.cpp
)

target_link_libraries(helloworld PRIVATE Qt5::Core)
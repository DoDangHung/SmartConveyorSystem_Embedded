
cmake_minimum_required(VERSION 3.16)

project(SmartConveyorSystem
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Core library
add_library(conveyor_core STATIC
    core/src/Product.cpp
)

target_include_directories(conveyor_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/core/include
)

# PC simulator
add_executable(conveyor_simulator
    simulator/main.cpp
)

target_link_libraries(conveyor_simulator
    PRIVATE conveyor_core
)

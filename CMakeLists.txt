cmake_minimum_required(VERSION 3.21)
project(Chip8Emu)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
link_directories(lib)

add_executable(Chip8Emu src/main.cpp src/Chip8.cpp src/Chip8.h)
target_link_libraries(Chip8Emu SDL2 SDL2main)

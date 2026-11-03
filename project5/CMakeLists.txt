cmake_minimum_required(VERSION 3.10)
project(GameProject)

add_subdirectory(lib)

add_executable(GameApp src/main.cpp)

target_link_libraries(GameApp PRIVATE game_lib)
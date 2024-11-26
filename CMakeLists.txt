cmake_minimum_required(VERSION 3.21)
project(hangman)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(C_SOURCES src/main.cpp src/hangman.cpp src/GameEngine.cpp)

add_executable(${PROJECT_NAME} ${C_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "inc")
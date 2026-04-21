cmake_minimum_required(VERSION 3.10)

project(RPGHeroes VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RPGHeroes
    src/main.cpp
    src/Hero.cpp
    src/Archer.cpp
    src/Warrior.cpp
    src/Magician.cpp
    src/Enemy.cpp
)

target_include_directories(RPGHeroes PRIVATE include)
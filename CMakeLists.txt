cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic -Wextra -g -Og")

set(CMAKE_CXX_EXTENSIONS OFF)

project(
  DesignPattern
  VERSION 1.0
  DESCRIPTION "Examples of design pattern implementations"
  LANGUAGES CXX C)

# enable before adding subdirectories
enable_testing()

add_subdirectory(Tools)
add_subdirectory(Creational)
add_subdirectory(Structural)
add_subdirectory(Behavioral)


set(CMAKE_INSTALL_PREFIX
    ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_CXX_LIBRARY_ARCHITECTURE}-${CMAKE_CXX_COMPILER_VERSION}
)

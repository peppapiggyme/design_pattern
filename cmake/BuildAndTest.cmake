macro(build_and_test my_project_name)

  cmake_minimum_required(VERSION 3.20)

  project(${my_project_name} LANGUAGES CXX C)

  message(STATUS "Building ${CMAKE_PROJECT_NAME}::${PROJECT_NAME} ...")

  if(NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic -Wextra -g -Og")
  endif()

  include_directories(include/)

  file(GLOB_RECURSE SRC src/*.cpp)
  file(GLOB_RECURSE INC include/*.hpp)
  file(GLOB_RECURSE MAIN test/main.cpp)

  add_library(${PROJECT_NAME} SHARED ${SRC} ${INC})

  add_executable(${PROJECT_NAME}_main ${MAIN})
  target_link_libraries(${PROJECT_NAME}_main PRIVATE ${PROJECT_NAME})

  install(
    TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)
  install(FILES ${INC} DESTINATION include/${PROJECT_NAME})
  install(TARGETS ${PROJECT_NAME}_main RUNTIME DESTINATION bin)

  add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}_main)
endmacro()

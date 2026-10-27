cmake_minimum_required(VERSION 3.16)
project(OpenGLGraphicsLabs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

file(GLOB LAB_SOURCES CONFIGURE_DEPENDS "lab_*.cpp")

foreach(source IN LISTS LAB_SOURCES)
  get_filename_component(filename "${source}" NAME)
  string(REGEX MATCH "lab_([0-9]+)" _ "${filename}")
  set(target "lab_${CMAKE_MATCH_1}")

  add_executable("${target}" "${source}")
  target_link_libraries("${target}" PRIVATE OpenGL::GL OpenGL::GLU GLUT::GLUT)
endforeach()

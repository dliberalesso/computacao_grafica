cmake_minimum_required(VERSION 3.7)
project(computacao_grafica)

set(CMAKE_C_STANDARD 99)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

add_executable(cg01 cg01.c)
target_link_libraries(cg01 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} m)

add_executable(cg02 cg02.c)
target_link_libraries(cg02 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

add_executable(cg03 cg03.c)
target_link_libraries(cg03 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} m)
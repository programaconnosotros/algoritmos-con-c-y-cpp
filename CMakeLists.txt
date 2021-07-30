cmake_minimum_required(VERSION 3.19)
project(algoritmos_con_c_y_cpp)

add_library(PCN 2021_edicion-1/clase-4/libreria/pcn.c)
target_include_directories (PCN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# CLASE 2

add_executable(2021_edicion-1_clase-2_ejercicio-1 2021_edicion-1/clase-2/ejercicio-1.c)
add_executable(2021_edicion-1_clase-2_ejercicio-2 2021_edicion-1/clase-2/ejercicio-2.c)
add_executable(2021_edicion-1_clase-2_ejercicio-3 2021_edicion-1/clase-2/ejercicio-3.c)
add_executable(2021_edicion-1_clase-2_ejercicio-4 2021_edicion-1/clase-2/ejercicio-4.c)
add_executable(2021_edicion-1_clase-2_ejercicio-5 2021_edicion-1/clase-2/ejercicio-5.c)

# CLASE 3

add_executable(2021_edicion-1_clase-3_ejercicio-1 2021_edicion-1/clase-3/ejercicio-1.c)
add_executable(2021_edicion-1_clase-3_ejercicio-2 2021_edicion-1/clase-3/ejercicio-2.c)
add_executable(2021_edicion-1_clase-3_ejercicio-3 2021_edicion-1/clase-3/ejercicio-3.c)
add_executable(2021_edicion-1_clase-3_ejercicio-4 2021_edicion-1/clase-3/ejercicio-4.c)

# CLASE 4

add_executable(2021_edicion-1_clase-4_ejercicio-1 2021_edicion-1/clase-4/ejercicio-1.c)
target_link_libraries(2021_edicion-1_clase-4_ejercicio-1 LINK_PUBLIC PCN)

add_executable(2021_edicion-1_clase-4_ejercicio-2 2021_edicion-1/clase-4/ejercicio-2.c)
target_link_libraries(2021_edicion-1_clase-4_ejercicio-2 LINK_PUBLIC PCN)

add_executable(2021_edicion-1_clase-4_ejercicio-3 2021_edicion-1/clase-4/ejercicio-3.c)
target_link_libraries(2021_edicion-1_clase-4_ejercicio-3 LINK_PUBLIC PCN)
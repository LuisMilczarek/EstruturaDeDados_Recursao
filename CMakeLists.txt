cmake_minimum_required(VERSION 3.20)
 
project(AulaRecursao)

include_directories(common/include)

add_executable(ex1_basico ex1/main.c)
add_executable(gen_graph_fibo experiments.c)
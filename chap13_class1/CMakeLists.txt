cmake_minimum_required(VERSION 3.5.0)
project(chap13_class1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(chap13_class1 main.cpp Personnage.cpp Arme.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

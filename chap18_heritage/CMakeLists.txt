cmake_minimum_required(VERSION 3.5.0)
project(chap18_heritage VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(chap18_heritage main.cpp Personnage.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

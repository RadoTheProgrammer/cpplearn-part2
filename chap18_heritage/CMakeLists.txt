cmake_minimum_required(VERSION 3.5.0)
project(chap18_heritage VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Add all executables in src/*.cpp
file(GLOB SOURCES src/*.cpp)
include_directories(include)
add_executable(a.out ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include_directories(include)





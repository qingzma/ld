cmake_minimum_required(VERSION 3.10)

if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
message(FATAL_ERROR "
FATAL: In-source build is not allowd.
")
endif()

project(Ld)
add_subdirectory(leveldb)

set(SOURCES src/ld.cpp)

add_executable(ld ${SOURCES})

target_link_libraries(ld PUBLIC leveldb)
target_include_directories(ld PUBLIC leveldb/include)
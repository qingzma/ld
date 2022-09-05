cmake_minimum_required(VERSION 3.10)

if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
message(FATAL_ERROR "
FATAL: In-source build is not allowd.
")
endif()

project(Ld)

# include(FetchContent)
# FetchContent_Declare(
#     leveldb
#     GIT_REPOSITORY https://github.com/qingzma/leveldb.git
#     GIT_TAG aa5479b
# )
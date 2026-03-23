cmake_minimum_required(VERSION 3.10)
project(FsLogger VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Setup Paths
set(UTILITY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../Utility")
set(UTILITY_LIB "${UTILITY_DIR}/build/libUtility.a")

include_directories(include "${UTILITY_DIR}/include")

# Create the static library
add_library(fs_logger STATIC 
    src/fslogger.cpp 
    src/fsexc.cpp 
    src/fserror.cpp
)

target_link_libraries(fs_logger PRIVATE "${UTILITY_LIB}")

# Optional: Build the test executable to verify the "Ping"
add_executable(fs_logger_test src/main.cpp)
target_link_libraries(fs_logger_test fs_logger)

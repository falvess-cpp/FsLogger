cmake_minimum_required(VERSION 3.10)
project(FsLogger VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensure headers are found
include_directories(include)

# Create the static library
add_library(fs_logger STATIC 
    src/fslogger.cpp 
    src/fsdate.cpp 
    src/fsexc.cpp 
    src/fserror.cpp
)

# Optional: Build the test executable to verify the "Ping"
add_executable(fs_logger_test src/main.cpp)
target_link_libraries(fs_logger_test fs_logger)

# Sets the minimum CMake version required for this project.
cmake_minimum_required(VERSION 3.22.1)

# Declares the project name.
project("cppnative")

# 2. Create your project's main native library
# The target name is "cppnative" based on your project() command
add_library(${CMAKE_PROJECT_NAME} SHARED
        native-lib.cpp)

# Collect all source files for your custom games_v2 library

# Step 1: Recursively collect all .cpp and .cc source files
file(GLOB_RECURSE GAMES_V2_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/games_v2/src/**/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/games_v2/src/**/*.cc"
)

# Create the games_v2 static library
add_library(games_v2 STATIC ${GAMES_V2_SOURCES})

# Add include directories for the games_v2 library
target_include_directories(games_v2 PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/games_v2/include/c
        ${CMAKE_CURRENT_SOURCE_DIR}/games_v2/include/cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/games_v2/src/c
        ${CMAKE_CURRENT_SOURCE_DIR}/games_v2/src/cpp
)

# Find the Android logging library
find_library(log-lib log)

# 4. Link all libraries to your main native library
target_link_libraries(${CMAKE_PROJECT_NAME}
        # Link standard Android libraries
        android
        ${log-lib}
        games_v2   # Link the games_v2 static library
)

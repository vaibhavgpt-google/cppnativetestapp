# Sets the minimum CMake version required for this project.
cmake_minimum_required(VERSION 3.22.1)

# Declares the project name.
project("cppnative")

# 1. Define your imported library from the .so file
add_library(gamesv2 SHARED IMPORTED)
set_target_properties(gamesv2 PROPERTIES IMPORTED_LOCATION
        ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libgamesv2.so)

# 2. Create your project's main native library
# The target name is "cppnative" based on your project() command
add_library(${CMAKE_PROJECT_NAME} SHARED
        native-lib.cpp)

# 3. Add include directories for the headers
# Use the CORRECT target name here: ${CMAKE_PROJECT_NAME}
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

# Find the Android logging library
find_library(log-lib log)

# 4. Link all libraries to your main native library
target_link_libraries(${CMAKE_PROJECT_NAME}
        # Link the manually imported gamesv2 library
        gamesv2

        # Link standard Android libraries
        android
        ${log-lib}
)
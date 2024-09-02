cmake_minimum_required(VERSION 3.20)  # Specifies the required CMake version.

project(compressor LANGUAGES CXX VERSION 1.0.0)      # Defines the project name.

set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(ZLIB REQUIRED)

# $source_files is a space-delimited list of filenames.
add_executable(${PROJECT_NAME}
        main.cpp
)  # Specifies the executable to build.

target_link_libraries(${PROJECT_NAME}
        ZLIB::ZLIB
)  # Specifies what libraries to link, using Conan.


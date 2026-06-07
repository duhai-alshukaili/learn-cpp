cmake_minimum_required(VERSION 3.25)

project(learn-cpp
    VERSION 0.1.0
    DESCRIPTION "Small C++23 programs for learning and review"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(AddLearningExample)

add_subdirectory(topics/00_sandbox)
add_subdirectory(topics/01_basics)
add_subdirectory(topics/02_control_flow)
add_subdirectory(topics/03_functions)
add_subdirectory(topics/04_types_and_conversions)
add_subdirectory(topics/05_references_pointers)
add_subdirectory(topics/06_arrays_strings)
add_subdirectory(topics/07_classes)
add_subdirectory(topics/08_raii_lifetime)
add_subdirectory(topics/09_templates)
add_subdirectory(topics/10_standard_library)
add_subdirectory(topics/11_error_handling)
add_subdirectory(topics/12_modern_cpp23)
add_subdirectory(topics/13_files_and_streams)
add_subdirectory(topics/14_projects)

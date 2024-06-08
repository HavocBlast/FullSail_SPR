cmake_minimum_required(VERSION 3.8)
project(Pointers)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Change path from /src if needed, or add more directories
file(GLOB_RECURSE sources
	"${CMAKE_SOURCE_DIR}/src/*.cpp"
)

# Add precompiler definitions like that:
add_definitions(-DSOME_DEFINITION)

add_executable(Pointers ${sources})

# Add more include directories if needed
target_include_directories(Pointers PUBLIC "{CMAKE_SOURCE_DIR}/include")

# If you have precompiled headers you can add them like this
# target_precompiled_headers(warehouse PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
# Run this command to generate the CMAKE output
# WARN: This must be ran every time you add/remove a source file

# INFO:	cmake -S. -G "Unix Makefiles" -B cmake

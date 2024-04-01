cmake_minimum_required(VERSION 3.28)

project(IA_Metric
	VERSION 0.1.0
	DESCRIPTION "A set of investment metric."
	LANGUAGES CXX)

# Build lib in Debug type if in development.
set(DEFAULT_BUILD_TYPE "Release")

if (EXISTS "${CMAKE_SOURCE_DIR}/.git")
	set(DEFAULT_BUILD_TYPE "Debug")
endif()

# Choose C++ standard and compile options
set(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

# for testing
add_executable(${PROJECT_NAME}
	./src/main.cpp
	./src/metric/metric.cpp
	./src/metric/revenue.cpp
	./src/metric/cost_of_goods_sold.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE
	-Wall
	-Werror
	-Wpedantic
	-Wextra)

target_include_directories(${PROJECT_NAME} PRIVATE
	./src)

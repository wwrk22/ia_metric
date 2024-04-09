cmake_minimum_required(VERSION 3.28)

project(IA_Metric
	VERSION 1.0.0
	DESCRIPTION "A set of investment metrics."
	LANGUAGES CXX)

# Build type
set(DEFAULT_BUILD_TYPE "Release")

# Build lib as Debug type in development env.
if (EXISTS "${CMAKE_SOURCE_DIR}/.git")
	set(DEFAULT_BUILD_TYPE "Debug")
endif()

# Variables in format @SOME_VAR@ are replaced by the variables in this CMakeLists.txt when the
# output file is produced. The output file will be written to the project binary directory, so the
# directory must be added to the list of include directories.
configure_file(IA_MetricConfig.h.in IA_MetricConfig.h)

# --------------------------------------------------------------------------------------------------
# lib
# --------------------------------------------------------------------------------------------------
add_library(${PROJECT_NAME}
	src/metric/metric.cpp
	src/metric/cost_of_goods_sold.cpp
	src/metric/revenue.cpp
	src/metric/metric_set.cpp
	src/metric/revenue_set.cpp
	src/computer/computer.cpp)

# Allow compiler to find the header files when building the library.
target_include_directories(${PROJECT_NAME}
	PUBLIC # Any targets that link against this lib will have this path added to its include directories.
		${PROJECT_SOURCE_DIR}/include)

# --------------------------------------------------------------------------------------------------
# INTERFACE lib for compiler flags
# --------------------------------------------------------------------------------------------------
add_library(ia_metric_compiler_flags INTERFACE)
target_compile_features(ia_metric_compiler_flags INTERFACE cxx_std_17)
target_link_libraries(${PROJECT_NAME} PUBLIC ia_metric_compiler_flags)

# testing
add_executable(main
	src/main.cpp)
target_include_directories(main
	PRIVATE
		${PROJECT_BINARY_DIR})
target_link_libraries(main PRIVATE ${PROJECT_NAME})

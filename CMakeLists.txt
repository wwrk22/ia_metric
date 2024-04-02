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

set(CMAKE_CXX_STANDARD 17) # desired standard
set(CMAKE_CXX_STANDARD_REQUIRED True) # require compiler to work with chosen standard

# Variables in format @SOME_VAR@ are replaced by the variables in this CMakeLists.txt when the
# output file is produced. The output file will be written to the project binary directory, so the
# directory must be added to the list of include directories.
configure_file(IA_MetricConfig.h.in IA_MetricConfig.h)

# ----------------------------------------------------
# lib
# ----------------------------------------------------
add_library(${PROJECT_NAME}
	src/metric/metric.cpp
	src/metric/cost_of_goods_sold.cpp
	src/metric/revenue.cpp)
target_include_directories(${PROJECT_NAME}
	PUBLIC
		${PROJECT_SOURCE_DIR}/include)

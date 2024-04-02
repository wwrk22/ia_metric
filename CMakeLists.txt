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

# ----------------------------------------------------
# lib
# ----------------------------------------------------
add_library(${PROJECT_NAME}
	src/metric/metric.cpp
	src/metric/cost_of_goods_sold.cpp
	src/metric/revenue.cpp)

target_include_directories(${PROJECT_NAME}
	# Allow compiler to find the header files when building the library.
	# Add the include directory for the client CMakeLists.txt.
	PUBLIC
		${PROJECT_SOURCE_DIR}/include)

# Use an INTERFACE library to specify C++ standard
add_library(ia_metric_compiler_flags INTERFACE)
target_compile_features(ia_metric_compiler_flags INTERFACE cxx_std_17)
target_link_libraries(${PROJECT_NAME} PUBLIC ia_metric_compiler_flags)

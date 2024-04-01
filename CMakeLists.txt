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

set(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

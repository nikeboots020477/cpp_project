cmake_minimum_required(VERSION 3.14)

#set(CMAKE_CXX_COMPILER ${CPP_COMPILER})
#target_compile_features(${TARGET_NAME} PRIVATE  cxx_std_17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Cpp_project)
add_executable(main main.cpp my_add.cpp)

include(FetchContent)

FetchContent_Declare(googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG v1.6.0 
        ) # need main for benchmark::benchmark


FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
    )
FetchContent_MakeAvailable(googletest)
FetchContent_MakeAvailable(googlebenchmark)
#find_package(GTest)

enable_testing()

add_executable(tests test_add.cpp my_add.cpp )

target_link_libraries(tests gtest_main)

add_executable(bench bench_add.cpp my_add.cpp )

target_link_libraries(bench benchmark::benchmark)

#include(GoogleTest)

#gtest_discover_tests(tests)

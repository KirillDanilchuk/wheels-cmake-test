cmake_minimum_required(VERSION 3.20)
project(wheels_test)

set(CMAKE_CXX_STANDARD 20)

add_executable(wheels_test main.cpp)

include(FetchContent)

FetchContent_Declare(
        wheels
        GIT_REPOSITORY https://github.com/KirillDanilchuk/wheels.git
        GIT_TAG origin/main
)

FetchContent_MakeAvailable(wheels)

target_link_libraries(${PROJECT_NAME} PRIVATE wheels)

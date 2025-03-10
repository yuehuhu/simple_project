include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(test_math_utils test_math_utils.cpp)
target_link_libraries(test_math_utils math_utils)

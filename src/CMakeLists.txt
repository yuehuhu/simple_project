add_library(MathUtils math_utils.cpp)
add_executable(SimpleProject main.cpp)
target_link_libraries(SimpleProject MathUtils)

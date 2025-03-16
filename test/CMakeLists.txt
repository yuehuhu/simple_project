include(FetchContent)

FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.6
)

FetchContent_MakeAvailable(catch)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(test_math_utils test_math_utils.cpp)
target_link_libraries(test_math_utils MathUtils Catch2::Catch2)

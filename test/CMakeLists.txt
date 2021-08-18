add_executable(t_point t_point.cpp)
target_link_libraries(t_point GTest::GTest GTest::Main)
add_test(NAME t_point COMMAND t_point)
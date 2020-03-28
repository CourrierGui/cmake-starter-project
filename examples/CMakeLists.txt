add_executable(hello_world hello_world.cpp)
target_include_directories(hello_world PUBLIC ../includes)
target_link_libraries(hello_world PUBLIC hello)

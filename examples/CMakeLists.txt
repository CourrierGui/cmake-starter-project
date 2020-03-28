add_executable(do_stuff do_stuff.cpp)
target_include_directories(do_stuff PUBLIC ../includes)
target_link_libraries(do_stuff PUBLIC math)

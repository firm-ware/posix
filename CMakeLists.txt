list(APPEND posix_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/sys.cpp)
list(APPEND posix_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/timing.cpp)
add_library(firm_posix ${posix_sources})
target_include_directories(firm_posix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(firm_posix
    firm_timing
    firm_sys
)

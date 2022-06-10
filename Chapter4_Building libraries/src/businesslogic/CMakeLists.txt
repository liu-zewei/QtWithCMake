# The "STATIC" keyword denotes a static library. If we wanted to create a shared or dynamic library, 
# we should use the "SHARED" keyword.
add_library(businesslogic STATIC
    businesslogic.cpp
)

target_link_libraries(businesslogic PRIVATE Qt5::Core)

# The library API is defined in the header file businesslogic/businesslogic.h. 
# By calling target_include_directories, we make sure that the absolute path to the businesslogic directory 
# is automatically added as an include path to all targets using our library.
target_include_directories(businesslogic INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
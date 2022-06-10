add_executable(helloworld
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(helloworld PRIVATE
    businesslogic
    PRIVATE Qt5::Widgets
    )

# set_target_properties(helloworld PROPERTIES
#     # prevent the creation of a console window on Windows
#     WIN32_EXECUTABLE ON
#     )
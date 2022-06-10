add_executable(helloworld
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(helloworld PRIVATE Qt5::Widgets)

set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE ON # prevent the creation of a console window on Windows
    )
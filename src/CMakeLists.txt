find_package(Qt5 5.15 REQUIRED
    COMPONENTS Core Gui Widgets )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(PROJECT_SOURCES
main.cpp      
mainwindow.cpp
mainwindow.h  
mainwindow.ui
resources.qrc
)

add_executable(Calc WIN32 ${PROJECT_SOURCES})
TARGET_LINK_LIBRARIES(Calc
    Qt5::Widgets Qt5::Core
)

target_link_libraries(Calc calc_gram)

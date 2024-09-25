cmake_minimum_required(VERSION 3.16)

set(PROJ testprog)
project(${PROJ} LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(${PROJ}
  main.cpp
)

get_directory_property(PARENT_DIR PARENT_DIRECTORY)
target_include_directories(${PROJ} PRIVATE ${PARENT_DIR}/libgit2/include)

target_link_libraries(${PROJ} Qt${QT_VERSION_MAJOR}::Core git2)
target_link_directories(${PROJ} PRIVATE ${CMAKE_BINARY_DIR}/libgit2)

message("Output dir is ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} and ${CMAKE_BINARY_DIR}")

include(GNUInstallDirs)
install(TARGETS ${PROJ}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

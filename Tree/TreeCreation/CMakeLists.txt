cmake_minimum_required(VERSION 3.16)

project(TreeCreation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TreeCreation main.cpp
    treeops.h treeops.cpp
    node.h)

include(GNUInstallDirs)
install(TARGETS TreeCreation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

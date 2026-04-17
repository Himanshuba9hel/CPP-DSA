cmake_minimum_required(VERSION 3.16)

project(Tree LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Tree main.cpp)

include(GNUInstallDirs)
install(TARGETS Tree
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_subdirectory(TreeCreation)

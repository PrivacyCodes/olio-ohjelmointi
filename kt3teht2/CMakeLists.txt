cmake_minimum_required(VERSION 3.5)

project(kt3teht2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kt3teht2 main.cpp)

include(GNUInstallDirs)
install(TARGETS kt3teht2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

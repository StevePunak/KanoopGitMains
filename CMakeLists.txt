cmake_minimum_required(VERSION 3.16)

# set(ENV{CMAKE_INCLUDES_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/cmake-includes")
set(PROJ_MAINS_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
# set(CMAKE_PROJECT_INCLUDE "$ENV{CMAKE_INCLUDES_DIR}/qt6-cmake-includes.cmake")

# -- Project specific config --------------------------------------------------
# Modify MAIN_PROJ for this specific project
set(MAIN_PROJ KanoopGitMains)
project(${MAIN_PROJ} VERSION 1.0.0 LANGUAGES CXX)

# Add all submodules for this specific project
add_subdirectory(libgit2)
add_subdirectory(testprog)
add_subdirectory(KanoopCommonQt)
add_subdirectory(libgit2qt)
add_subdirectory(KanoopQtGui)
add_subdirectory(KanoopGit)
add_subdirectory(Git2QtTests)

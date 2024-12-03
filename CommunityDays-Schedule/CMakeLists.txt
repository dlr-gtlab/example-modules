#             ______________      __
#            / ____/_  __/ /___  / /_
#           / / __  / / / / __ `/ __
#          / /_/ / / / / / /_/ / /_/ /
#         ____/ /_/ /_/\__,_/_.___/
######################################################################

cmake_minimum_required(VERSION 3.15)
project(CDCommunityDays VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

option(BUILD_UNITTESTS "Build Unittests" OFF)

include(GTlab)
enable_gtlab_devtools()
gtlab_standard_setup()

find_package(Qt5 COMPONENTS Core Widgets Xml REQUIRED)

# support for monobuilds
if (NOT TARGET GTlab::Core)
  find_package(GTlab REQUIRED)
endif()

add_subdirectory(src)

install(DIRECTORY examples DESTINATION ".")

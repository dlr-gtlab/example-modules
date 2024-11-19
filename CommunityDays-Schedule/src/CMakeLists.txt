#             ______________      __
#            / ____/_  __/ /___  / /_
#           / / __  / / / / __ `/ __
#          / /_/ / / / / / /_/ / /_/ /
#         ____/ /_/ /_/\__,_/_.___/
#
######################################################################

add_gtlab_module(CDCommunityDays MODULE_ID "CommunityDays"
    SOURCES
    cd_communitydays.cpp
    cd_communitydays.h
    data/cd_package.cpp
    data/cd_package.h
    data/cd_talk.cpp
    data/cd_talk.h
    data/cd_break.h
    data/cd_break.cpp
    data/cd_session.h
    data/cd_session.cpp
    ui/cd_packageui.cpp
    ui/cd_packageui.h
    
    README_FILE "${PROJECT_SOURCE_DIR}/README.md"
    CHANGELOG_FILE "${PROJECT_SOURCE_DIR}/CHANGELOG.md"
)

add_library(CD::CommunityDays ALIAS CDCommunityDays)

target_link_libraries(CDCommunityDays
    PUBLIC GTlab::Gui
    PRIVATE Qt5::Xml Qt5::Widgets
)

set_property(TARGET CDCommunityDays PROPERTY AUTOMOC ON)

target_include_directories(CDCommunityDays
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/data>
)

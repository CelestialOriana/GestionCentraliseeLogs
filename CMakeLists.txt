cmake_minimum_required(VERSION 3.5)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})

set (CMAKE_BUILD_TYPE "Debug" CACHE
      STRING "Choose the type of build.")

project(${ProjectId} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#1/3-Ajouter les fichiers sources de votre projet
set(SRCS
#   Dossier/classe.cpp
        Menu/menu.cpp
        Logs/log.cpp
    )

#2/3-Ajouter les fichiers headers de votre projet
set(HEADERS
        Menu/menu.h
        Logs/log.cpp
        Logs/log.h
        #   Dossier/classe.h
    )

#3/3-Ajouter les noms des dossiers de vos modules
#include_directories(Dossier)

add_executable(${ProjectId} main.cpp ${SRCS} ${HEADERS})

## Options ######################################################################
#option(BUILD_TESTS "Enable to build unit tests" TRUE)


## Testing ######################################################################
#if (BUILD_TESTS)
#    # Coverage #################################################################
#    set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake-modules)
#    include(CodeCoverage)
#    append_coverage_compiler_flags()
#    target_link_libraries(${CMAKE_PROJECT_NAME} gcov)
#    setup_target_for_coverage_gcovr_html(
#        NAME coverage
#        EXECUTABLE ${CMAKE_BINARY_DIR}/test/bin/testProjet
#        DEPENDENCIES ${CMAKE_PROJECT_NAME}
#        EXCLUDE "build/CMakeFiles/*")

#    enable_testing ()
#    add_subdirectory(test)
#endif(BUILD_TESTS)

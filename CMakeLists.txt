

# cmake steuert das build sysytem
# cmake ist praktisch auch eine eigene programmiersprache
# cmake files müssen in jeden ordner mit coderelevanten files


cmake_minimum_required(VERSION 3.10)

project("Informatik 2")

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_CXX_STANDARD 20)

find_package(Catch2 REQUIRED) #suche die bibliothek Catch2, die wird gebraucht
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(CTest) # include (global nutzbar?) 
include(Catch) 

add_subdirectory(src) # neues subdirectory hinzufügen?


cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")

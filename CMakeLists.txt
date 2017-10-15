cmake_minimum_required(VERSION 3.2)
project(qsql)

#set(CMAKE_CXX_COMPILER /usr/bin/g++-5)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-ggdb -O0 ${CMAKE_CXX_FLAGS} -I/usr/local/include/antlr4-runtime -L/usr/local/lib")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/cppqsql/generated)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/cppqsql/include)

FILE(GLOB_RECURSE QSQL_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/cppqsql/**.cpp)
FILE(GLOB_RECURSE QSQL_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/cppqsql/**.h)
ADD_LIBRARY(qsql ${QSQL_SOURCES} ${QSQL_HEADERS})
TARGET_LINK_LIBRARIES(qsql antlr4-runtime folly)

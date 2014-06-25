cmake_minimum_required(VERSION 2.8)

project(glTrace)
option (SEPARATE_BUILD OFF)
SET (CMAKE_CXX_COMPILER "gcc")
SET (CMAKE_CXX_FLAGS "-Wall -g3 -O2")
SET (CMAKE_C_FLAGS "-Wall -g3 -O2")

include_directories("./include")

FILE(GLOB GENERATED_SRC
  "src/generated/gl*.c"
)

SET(GLTRACE_SOURCES
  ${GENERATED_SRC}
  src/glReadPixels.c
  src/glCopyTexImage.c
  src/catch.c
  src/timediff.c
)
ADD_LIBRARY(gltrace SHARED ${GLTRACE_SOURCES})

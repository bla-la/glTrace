#!/bin/bash
rm -rf CMakeFiles CMakeCache.txt cmake_install.cmake
rm src/generated/*
rm include/generated.h

./tools/registryToC.py external/khronos-papi/gl.xml ./
cmake ./

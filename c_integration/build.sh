#!/bin/bash
# Compiles the Cython code in DataFile.pyx to use in Python

# Build the program to generate data.txt, and run it
g++ -o makefile makeFile.cpp
./makefile

# Build the program to test the C++ class to be translated, and run it
g++ -o loadfile loadFile.cpp
./loadfile

# Build the cython library wrapped around same C++ class, and test it
python3 setup.py build_ext --inplace
python3 run.py
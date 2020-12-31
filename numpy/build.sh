#!/bin/bash
# Compiles the Cython code to build the numpy dictionary structure to use in Python

# Build the cython library wrapped around same C++ class, and test it
python3 setup.py build_ext --inplace
python3 run.py
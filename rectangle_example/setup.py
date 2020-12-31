from setuptools import setup

from Cython.Build import cythonize

# Be careful in your file naming, since cython will make the name.pyx into name.cpp, and can overwrite your other file, hence rect
setup(ext_modules=cythonize("rect.pyx"))
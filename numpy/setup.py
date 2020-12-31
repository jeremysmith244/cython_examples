from setuptools import setup, Extension
from Cython.Build import cythonize
import numpy

extensions = [
    Extension("dictionary_cython", ["dictionary_cython.pyx"], include_dirs=[numpy.get_include()])
]
setup(
    name='dictionary_cython',
    ext_modules=cythonize(extensions),
    script_args = ["build_ext", "--inplace"]
)
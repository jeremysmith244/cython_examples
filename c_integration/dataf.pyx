# distutils: language = c++

from Datafile cimport Datafile

cdef class PyDataFile:
    cdef Datafile*c_datafile

    def __cinit__(self, char* path):
        self.c_datafile = new Datafile(path)

    def __dealloc__(self):
        del self.c_datafile

    def printData(self):
        self.c_datafile.printData()

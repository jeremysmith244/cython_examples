cdef extern from "Datafile.cpp":
    pass

# Declare the class with cdef
cdef extern from "Datafile.h" namespace "loaders":
    cdef cppclass Datafile:
        Datafile() except +
        Datafile(char*) except +
        void printData()
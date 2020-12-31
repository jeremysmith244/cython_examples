import numpy as np
cimport numpy as np
from time import time

DTYPE = np.float
ctypedef np.float_t DTYPE_t

def build_dict_cy():
    t1 = time()
    cdef int size_of_dict = 1000000
    cdef np.ndarray dummy_data = np.zeros((2,size_of_dict), dtype=DTYPE)
    cdef int i

    blank_dict = {}

    for i in range(size_of_dict):
        name = 'Row%s' % i
        blank_dict[name] = dummy_data

    t2 = time()

    print("It took %s s to build a dictionary of size %s in Cython" % ( (t2-t1), size_of_dict) )
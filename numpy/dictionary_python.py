import numpy as np
from time import time

def build_dict_py():
    t1 = time()
    size_of_dict = 1000000
    blank_dict = {}
    dummy_data = np.zeros((2,size_of_dict))

    for i in range(size_of_dict):
        name = 'Row%s' % i
        blank_dict[name] = dummy_data

    t2 = time()

    print("It took %s s to build a dictionary of size %s in pure numpy" % ( (t2-t1), size_of_dict) )
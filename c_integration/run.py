from dataf import *
from time import time

if __name__ == "__main__":
    print("Testing Cython wrapper of Datafile!:")
    t1 = time()
    datafile = PyDataFile(b'data.txt')
    datafile.printData()
    t2 = time()
    print("Cython took: %s microseconds"%str((t2-t1)*1e6)[:3])
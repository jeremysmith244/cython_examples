# Be careful in your file naming, since cython will make the name.pyx into name.cpp, and can overwrite your other file, hence rect

from rect import *
if __name__ == "__main__":
    tangle = PyRectangle(0,0,10,10)
    area = tangle.get_area()
    print("Rectangle has area %s"%area)
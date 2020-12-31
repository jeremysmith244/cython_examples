#ifndef DATAFILE_H
#define DATAFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

namespace loaders {
    class Datafile {
        private:
            vector <float> data;
            float t,x;
        public:
            Datafile ( ) ;
            Datafile ( string path );
            void printData ( ) ;
    };
}

#endif
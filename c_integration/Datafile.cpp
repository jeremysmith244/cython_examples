#include "Datafile.h"

namespace loaders{

    Datafile::Datafile ( ) { };
    Datafile::Datafile(string path) {

        ifstream myFile (path);
        string line;

    while(getline(myFile, line))
        {
            stringstream ss(line);
            float val;

            while(ss >> val) {
                if(ss.peek() == ',') ss.ignore();
                data.push_back(val);
            }
        }
    }

    void Datafile::printData() {
        int i = -1;
        float t,x;
        for(float val : data) {
            if (i < 0) {
                t = val;
                i *= -1;
            } else {
                x = val;
                i *= -1;
                cout << "Value pair: " << t << "," << x << endl;
            }
        }
    }
}

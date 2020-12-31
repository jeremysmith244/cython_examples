#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myfile;
    myfile.open ("data.txt");

    for (int i = 0; i < 10; i++) {
        myfile << i << "," << i*2 << "\n";
    }
    myfile.close();
    cout << "Made a data file!" << endl;
    return 0;
}
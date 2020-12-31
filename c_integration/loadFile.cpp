#include "Datafile.cpp"
#include <chrono>
using namespace std::chrono;  

int main() {
    cout << "Testing C++ Datafile class!:" << endl;
    auto start = high_resolution_clock::now();
    loaders::Datafile dataFile("data.txt");
    dataFile.printData();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "C++ took: " << duration.count() << " microseconds" << endl; 
}
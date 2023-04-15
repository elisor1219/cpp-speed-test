#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

int main(){

    std::vector<int> vectorOfInt;
    srand(1);
    // Randomly fill vector with 1s and 0s
    for (int i = 0; i < 1000000; i++) {
        vectorOfInt.push_back(rand() % 2);
    }

    auto start = high_resolution_clock::now(); // Start timer - - - - 
    
    int runFor = vectorOfInt.size();

    std::vector<int> vectorOfInt2;

    for (int i = 0; i < runFor; i++) {
        vectorOfInt2.push_back(1);
    }

    auto stop = high_resolution_clock::now(); // Stop timer - - - -
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << duration.count() << std::endl;

}
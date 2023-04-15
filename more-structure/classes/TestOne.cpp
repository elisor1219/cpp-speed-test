#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

#include "include/TestOne.h"


double TestOne::runTest(){
    std::vector<int> vectorOfInt;
    srand(1);
    // Randomly fill vector with 1s and 0s
    for (int i = 0; i < 1000000; i++) {
        vectorOfInt.push_back(rand() % 2);
    }

    int runFor = vectorOfInt.size();

    auto start = high_resolution_clock::now(); // Start timer - - - - 


    for (int i = 0; i < runFor; i++) {
        vectorOfInt.at(i) = 1;
    }

    auto stop = high_resolution_clock::now(); // Stop timer - - - -
    auto duration = duration_cast<microseconds>(stop - start);
    return duration.count();
}
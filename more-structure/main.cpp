#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

#include "include/TheTester.h"
#include "include/TestOne.h"
#include "include/TestTwo.h"

double averageTime(std::vector<double> timeVector) {
    double averageTime = 0;
    for (int i = 0; i < timeVector.size(); i++) {
        averageTime += timeVector.at(i);
    }
    averageTime /= timeVector.size();
    return averageTime;
}

int main(){
    auto start = high_resolution_clock::now();
    TestOne testOne;
    TestTwo testTwo;
    
    int testFor = 100;
    std::vector<double> timeTestOne(testFor);
    std::vector<double> timeTestTwo(testFor);

    for (int i = 0; i < testFor; i++) {
        timeTestOne[i] = testOne.runTest();
        timeTestTwo[i] = testTwo.runTest();
    }

    double averageTimeTestOne = averageTime(timeTestOne);
    double averageTimeTestTwo = averageTime(timeTestTwo);

    std::cout << "Average time for test 1: " << averageTimeTestOne << std::endl;
    std::cout << "Average time for test 2: " << averageTimeTestTwo << std::endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout << "Total test time: " << duration.count() << " milliseconds" << std::endl;
    return 0;
}
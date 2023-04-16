#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

#include "include/TestOne.h"


double TestOne::runTest(){
    /*
    Here can you put the code that you want to precomute before the test.
    */
    auto start = high_resolution_clock::now(); // Start timer - - - - 

    /*
    Inside the timers you can put the code that you want to test.
    */

    auto stop = high_resolution_clock::now(); // Stop timer - - - -
    auto duration = duration_cast<microseconds>(stop - start);

    /*
    And here you can put the code that you want to do after the test.
    */
   
    return duration.count();
}
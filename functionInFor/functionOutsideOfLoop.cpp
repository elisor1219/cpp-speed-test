#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

std::vector<bool> isThisTrueVec(std::vector<int> vectorOfInt) {
    std::vector<bool> vectorOfBool(vectorOfInt.size());
    for (int i = 0; i < vectorOfInt.size(); i++) {
        if (vectorOfInt[i] == 1) {
            vectorOfBool[i] = true;
        } else {
            vectorOfBool[i] = false;
        }
    }
    return vectorOfBool;
}

int main(){

    std::vector<int> vectorOfInt;
    srand(1);
    // Randomly fill vector with 1s and 0s
    for (int i = 0; i < 1000000; i++) {
        vectorOfInt.push_back(rand() % 2);
    }

    int runFor = vectorOfInt.size();

    std::vector<int> vectorOfInt2;

    auto start = high_resolution_clock::now(); // Start timer - - - - 

    std::vector<bool> vectorOfBool = isThisTrueVec(vectorOfInt);

    for (int i = 0; i < runFor; i++) {

        bool isOne = vectorOfBool[i];

        if (isOne){
            vectorOfInt2.push_back(vectorOfInt[i]);
        }
    }

    auto stop = high_resolution_clock::now(); // Stop timer - - - -
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << duration.count() << std::endl;

}
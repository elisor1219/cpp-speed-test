#ifndef TEST_ONE_H
#define TEST_ONE_H

#include <chrono>

#include "TheTester.h"

class TestOne : public TheTester{
    public:
        double runTest() override;  
};

#endif // TEST_ONE_H

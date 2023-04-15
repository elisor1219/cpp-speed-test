#ifndef TEST_TWO_H
#define TEST_TWO_H

#include <chrono>

#include "TheTester.h"

class TestTwo : public TheTester{
    public:
        double runTest() override;  
};

#endif // TEST_TWO_H

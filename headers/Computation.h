// include pre-processor directives
#include <iostream>

// use C++ standard library namespace
using namespace std;

class Computation
{
    public:
        // This method may be used to compute the lowest
        // number in a sequence of numbers.
        virtual void computeLowest() = 0;
        // This method may be used to compute the highest
        // number in a sequence of numbers.
        virtual void computeHighest() = 0;
        // This method may be used to compute the sum
        // of a sequence of numbers.
        virtual void computeSum() = 0;
};
// Topic: STL Introduction In c++

// Notes:-
// STL has three components:-
// a. Container
// b. Iterator
// c. Algorithm

// std::array
#include <iostream>
#include <array>
using namespace std;

int main()
{

    //Notes:-
    /*
        1. std::array is a container which encapsulates fixed size arrays.
        2. arraysize is needed at compile time.
        3. Assign by value is actually by value.
        4. Access elements:
            a. at()
            b. []
            c. front()
            d. back()
            e. data() --> gives general access to the underlying array
    */

    // Declare
    std::array<int, 5> myarray;

    // Initialize
    std::array<int, 5> arr = {1,2,3,4,5}; //initializer list
    std::array<int, 5> arr2 {1,2,3,4,5}; // uniform initialization

    // Assign using initializer list
    myarray = {1,2,3,4,5};

    
}
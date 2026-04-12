#include <iostream>
using namespace std;

int main()
{
    // Reference variables point to the same memory location as their parent variable
    int x = 10;
    int& y = x;

    cout << x << '\n';
    cout << y << '\n';

    x = 100;

    cout << x << '\n';
    cout << y << '\n';

    return 0;
}
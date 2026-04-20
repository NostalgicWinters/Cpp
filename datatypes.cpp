#include <iostream>
using namespace std;

int main()
{
    // Variable name can't be bigger than 255 characters
    char a = 'A';
    bool t = true;
    string str = "star";
    int x = 9;
    float y = 10.001;
    double z = 3.9982;
    cout << x+a << '\n';
    cout << a+t << '\n';
    // cout << str+x; --> error
    return 0;
}
#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (arguments-list) : initialization list
{
    assignment + other codes
}

class Test{
    int a;
    int b;
    public:
    test(int i, int j) : a(i), b(j)
    {
        constructor-body.
    }
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(a+j), a(i) 
    // Test(int i, int j) : b(j), a(i+b) //--> This will create problem because a will be initialized first.
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed." << endl;
        cout << "Value of a is "<<a<< endl;
        cout << "Value of b is "<<b<< endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a = 3; // Variable1
    int b = 2; // Variable2
    float pi = 3.14;
    char c = 'p';
    bool is_true = true;
    cout << "This is tutorial 4." << endl
         << "The value of a is " << a << endl
         << "The value of b is " << b << endl;
    cout << "The value of pi is " << pi << endl;
    cout << "The character is " << c << endl;
    cout << "The value for true is " << is_true << endl;
    return 0;
}

// Note:   Local variable have higher precedence than global variable.
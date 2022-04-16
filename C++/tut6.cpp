// There are two types of Header files:
// 1. System header files:These comes with the compiler.
#include <iostream>
// 2. User defined header files: These are written by programmers.
// #include"this.h" //This will produce an error if this.h file is not present in the current directory.
using namespace std;
int main()
{
    int a = 9, b = 3;
    cout << "Operatyor in C++." << endl;

    // Arithematic Operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // prints value of a, ie a=9; value=10.
    cout << "The value of a-- is " << a-- << endl; // prints value of a, ie a=10; value=9.
    cout << "The value of ++a is " << ++a << endl; // value=10, prints value=10.
    cout << "The value of --a is " << --a << endl; // value=9, prints value=9.

    // Comparison Operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;

    // Logical Operators
    cout << "The value of the logical and operator ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of the logical or operator ((a==b) || (a>b)) is " << ((a == b) || (a > b)) << endl;
    cout << "The value of the logical not operator !(a==b) is " << !(a == b) << endl;

    return 0;
}

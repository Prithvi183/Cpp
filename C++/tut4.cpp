#include <iostream>
using namespace std;

int main()
{
    int a = 3; // Variable1
    int b = 2; // Variable2
    float pi = 3.14;
    char c = 'p';
    bool is_true = true;
    double d = 10.213458796;

    cout << "This is tutorial 4." << endl
         << "The value of a is " << a << endl
         << "The value of b is " << b << endl;
    cout << "The value of pi is " << pi << endl;
    cout << "The character is " << c << endl;
    cout << "The value for true is " << is_true << endl;
    cout << "The value of d is " << d << endl;
    return 0;
}

/* Note:   Local variable have higher precedence than global variable.

Local variables:
Local variables are declared inside the braces of any function and can be assessed only from there. 

Global variables:
Global variables are declared outside any function and can be accessed from anywhere.

Data Types:

1) Built-in Data-types:
    Int
    Float
    Char
    Double
    Boolean

2) User-Defined Data-types:
    struct
    Union
    Enum

3) Derived Data-types:
    Arrays
    Pointers
    Functions

Rules to Declare Variables in C++
    Variable names in C++ language can range from 1 to 255
    Variable names must start with a letter of the alphabet or an underscore
    After the first letter, variable names can contain letters and numbers
    Variable names are case sensitive
    No spaces and special characters are allowed
    We cannot use reserved keywords as a variable name

*/
// Pointers in C++

#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? -----> A pointer is a data type which holds the address of other data type. The “&” operator is called “address of" operator, and the "*” operator is called “value at” dereference operator

    int a = 3;
    int *b;
    b = &a;

    // & -----> (Address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * -----> (Value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    // int** c = &b;
    int** c;
    c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address b is " << *c << endl;
    cout << "The value at address(value_at(c)) is " << **c << endl;

    return 0;
}
// Constants, Manipulators & Operator Precedence

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a=34;
    // cout <<"The value of a was "<<a<<endl;
    // a=45;
    // cout << "The value of a is "<<a<<endl;

    // //Constants in C++

    // const float pi = 3.14;
    // cout << "The value of pi is "<<pi<<endl;
    // pi = 3.15; // Here error will occur because pi is declared as a constant.
    // cout <<pi;

    // //Manipulator in C++

    //  The two most commonly used manipulators are: "endl" and "setw".
    //     "endl" is used for the next line.
    //     "setw" is used to specify the width of the output.

    int a=3, b=78, c=1233;
    cout << "The value of a without setw is " << a <<endl;
    cout << "The value of b without setw is " << b <<endl;
    cout << "The value of c without setw is " << c <<endl;

    cout << "The value of a is " << setw(4) << a <<endl;
    cout << "The value of b is " << setw(4) << b <<endl;
    cout << "The value of c is " << setw(4) << c <<endl;

    // Operator Precedence

    // int a = 3, b = 4;
    // int c = ((((a * 5) + b) - 45) + 87);
    // cout << "The value of expression is " << c << endl;

    return 0;
}
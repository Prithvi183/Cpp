#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for workinng with th files of C++ are:
1. fstreambase.
2. ifstream. --> derived from fstreambase.
3. ofstream. --> derived from fstreambase.

In order to work with files in C++, you have to open it.
Primilarily, there are two ways to open a file:
1. Using the constructor.
2. Using the member function open() of the class
*/

int main()
{
    string st = "This is a sample file for a tutorial in C++.";
    
    // Opening files using constructor and reading it.
    ofstream out("sample60.txt"); //Write operation
    out<<st;

    return 0;
}
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
    string st2;
    
    // Opening files using constructor and writing it.
    ofstream out("sample60.txt"); //Write operation
    out<<st;

    // Opening files using constructor and reading it.
    ifstream in("sample60b.txt"); //Write operation
    // in>>st2; // This will only read 1st letter of the file.
    getline(in, st2);
    cout<<st2;

    return 0;
}
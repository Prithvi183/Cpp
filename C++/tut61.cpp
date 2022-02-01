#include<iostream>
#include<fstream> 

using namespace std;

int main()
{
    // Connecting our file with out stream
    ofstream out("sample60.txt");

    // Creating a name variable entered by a user
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    // Writing a string to the file.2
    out<<"My name is " + name;
    out.close();

    ifstream in("sample60.txt");
    string content;
    in>>content;
    getline(in, content);
    cout<<"The content of the file is: "<<content;
    in.close();

    return 0;
}
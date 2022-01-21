// OOPs - Classes and Objects.
/*
C++ ---> initially called as ---> C with classes by stroustroup
class ---> extension of structures (in C)
    Structures have limitations
        - members are public
        - No methods
classes ---> structures + more
classes ---> can have methods and properties.
classes ---> can make few members as private and few as public.
structure in C++ are typedefed
you can declare objects aling with the class declaration
    eg: class Employee {
        Class definition;
    } prithvi, rahul, shivam;
    prithvi.salary=2000; makes no sense if the salary is private.
*/

// Nesting of Member functions:
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            /* code */
            cout << "\nIncorrect binary number." << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    cout << "\nDisplaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
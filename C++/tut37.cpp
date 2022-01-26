#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
};

// Derived Class Syntax
// class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
// {
//     class members\methods,etc.....
// }
/*
Note:
1. Default Visiblity Mode is private.
2. Public Visiblity Mode: Public members of the base class becomes Public members of the derived class.
3. Private Visiblity Mode: Public members of the base class becomes Private members of the derived class.
4. Private members of base class are never inherited.
*/

// Createing a Programmer class derived from Employee base class.
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee prithvi(1), shivam(2);
    cout << prithvi.salary << endl;
    cout << shivam.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    cout << skillF.id << endl;
    return 0;
}
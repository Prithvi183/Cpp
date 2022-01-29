#include<iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying Base Class variable var_base " << var_base << endl;
    };
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Derived Class variable var_derived " << var_derived << endl;
    };
};

int main()
{
    BaseClass *bptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    bptr = &obj_derived;
    bptr->display();
    return 0;
}
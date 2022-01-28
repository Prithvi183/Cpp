#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
    Order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, public C{
    Order of execution of constructor -> B() then C() and then A()
};

Case 3:
class A: public B, virtual public C{
    Order of execution of constructor -> C() then B() and then A()
};
*/

class Base
{
    int data;

public:
    Base(int i)
    {
        data = i;
        cout << "Base class constructor is called." << endl;
    }
};

int main()
{

    return 0;
}
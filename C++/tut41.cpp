#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple syntax.
class DerivedC : visibility - mode base1, visibility - mode base2
{
    Class body of the class "DerivedC".
}
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
    public: 
        void show()
        {
            cout<<"The Value of the Base1 is "<<base1int<<endl;
            cout<<"The Value of the Base2 is "<<base2int<<endl;
            cout<<"The Sum of the Base1 and Base2 is "<<base1int + base2int<<endl;
        }
};

/*
The inherited derived class will look something like this:
Data Members:
    base1int ---> protected
    base2int ---> protected
Member Functions:
    set_base1int() ---> public
    set_base2int() ---> public
    set_show() ---> public
*/

int main()
{
    Derived prithvi;
    prithvi.set_base1int(25);
    prithvi.set_base2int(5);
    prithvi.show();
    return 0;
}
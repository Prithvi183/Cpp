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

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called." << endl;
    }
    void print_data1(){
        cout<<"The value of the data1 is "<<data1<<endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called." << endl;
    }
    void print_data2(){
        cout<<"The value of the data2 is "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
        int derived1, derived2;
        public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called."<<endl;
        }
        void display(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived prithvi(1, 2, 3, 4);
    prithvi.print_data1();
    prithvi.print_data2();
    prithvi.display();

    return 0;
}
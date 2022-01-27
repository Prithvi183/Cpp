#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
/*
For a protected member:
                                Public Derivation   Private derivation   Protected derivation
        1. Private members.     Not Inherited       Not Inherited        Not Inherited   
        2. Protected members.   Private             Private              Protected
        3. Public members.      Public              Private              Protected
*/

class Derived : protected Base{

};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a<<endl;  // Will not work since 'a' is protected in both base as well as derived class.
    // cout<<d.a<<endl;  // Will not work since 'a' is protected in both base as well as derived class.
    return 0;
}
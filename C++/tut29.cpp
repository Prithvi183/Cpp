#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Creating a Constructor
    // constructor is a special member function with the same name as of class.
    // It is used to initialize the objects of its classes.
    // It is automatically invoked whenever an object is created.
    Complex(void); // Declaration of the constructor
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
    Complex :: Complex(void){     //--->This is a default constructor as it takes no parameters.
    a = 10;
    b = 0;
    }

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

/*Properties of Constructor:

1. It should be declared in the public section of class.
2. They are automatically invoked whenever the object is created.
3. They do not have return value and do not return types.
4. It can have default arguments.
5. We cannot refer to thier address. 

*/
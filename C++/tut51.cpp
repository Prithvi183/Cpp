#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void set_data(int a, int b){
        real = a;
        imaginary = b;
    }
    void get_data(){
        cout<<"The value of real part is "<<real<<endl;
        cout<<"The value of imaginary part is "<<imaginary<<endl;
    }
};

int main()
{
    Complex c;
    // Complex *ptr = &c;
    Complex *ptr = new Complex;
    c.set_data(4, 6);
    c.get_data();
    // (*ptr).set_data(40, 60); is exactly same as
    ptr->set_data(40, 60);
    // (*ptr).get_data(); is exactly same as
    ptr->get_data();
    return 0;
}
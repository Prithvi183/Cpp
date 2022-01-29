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
    c.set_data(4, 6);
    c.get_data();
    return 0;
}
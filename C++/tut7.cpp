#include <iostream>
using namespace std;

int a = 45;

int main()
{
    //************Build In Data Types*************

    // int a,b,c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c = a+b;
    // cout << "The sum is "<<c<<endl;
    // cout << "The value of a is "<<a<<endl;      //local variable has higher precedence.
    // cout << "The value of global a is "<<::a<<endl;     // '::' is called as scope resolution operator.

    //************Float, Double and Long Double Literals***************

    // float d=34.4f;  // 'f' is written at the to denote that it is a float.
    // long double e=34.4l;   // 'l' is written at the end to denote that it is long double.
    // cout<< "The size of 34.4 is "<< sizeof(34.4)<<endl;
    // cout<< "The size of 34.4f is "<< sizeof(34.4f)<<endl;
    // cout<< "The size of 34.4F is "<< sizeof(34.4F)<<endl;
    // cout<< "The size of 34.4l is "<< sizeof(34.4l)<<endl;
    // cout<< "The size of 34.4L is "<< sizeof(34.4L)<<endl;
    // cout<< "The value of d is "<<d<<endl;
    // cout<< "The value of e is "<<e<<endl;

    //****************Reference Variables*****************

    // float x = 445;
    // float & y = x; //'y' is used as reference variable. '&' stores the value of x.
    // cout<<x<<endl;
    // cout<<&y<<endl;
    // cout<<y<<endl;

    // //**************Typecasting****************
    
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << float(a) << endl;
    cout << "The value of a is " << (float)a << endl;

    cout << "The value of b is " << int(b) << endl;
    cout << "The value of b is " << (int)b << endl;

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + (int)b << endl;
    cout << "The expression is " << a + int(b) << endl;

    return 0;
}
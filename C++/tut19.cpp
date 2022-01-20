#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int sum(int a, int b, int c)
{
    return a+b+c;
}

// Volume of cylinder
int volume(double r, int h)
{
    return (3.14*r*r*h);
}

// Volume of cube
int volume(int a)
{
    return a*a*a;
}

// Rectangukar box
int volume(int l, int b, int h)
{
    return (l*b*h);
}

int main()
{
    cout<<"The sum of 4 and 6 is "<<sum(4, 6)<<endl;
    cout<<"The sum of 4, 5 and 6 is "<<sum(4, 5, 6)<<endl;
    cout<<"The volume of cuboid of parameters 4, 5 and 6 is "<<volume(4, 5, 6)<<endl;
    cout<<"The volume of cube of parameters 5 is "<<volume(5)<<endl;
    cout<<"The volume of cylinder of parameters 4 and 6 is "<<volume(4, 6)<<endl;
    
    return 0;
}
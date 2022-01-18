#include<iostream>
using namespace std;

// Function prototypes.
// return_type function_name(arguments);

int sum(int a, int b);      //Function initialation
void g();

int main()
{
    int num1, num2;
    cout<< "Enter the Num1: ";
    cin>>num1;
    
    cout<< "Enter the Num2: ";
    cin>>num2;
    // num1 and num2 are actual parameters.
    cout<<"The sum of Num1 and Num2 is "<<sum(num1, num2);
    g();

    return 0;
}

int sum(int a, int b)           // Function declaration
{
    //  Formal parameters: a and b are taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}

void g()
{
    cout<<"\nHello, Good Morning!!";
}
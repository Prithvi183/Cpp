#include<iostream>
using namespace std;

// Inline function: Only use when negligibale code is executed many times.
inline int product(int x, int y)
{
    return x*y;
}

// // Static function.  (Do not use static variables in inline functions.)
// int product(int x, int y)
// {
//     static int z;
//     z = z+1;        //This executes only once.
//     return x*y+z;   //Next time this function will run, the value of z will retained.
// }

// Default arguments:
float moneyRecieved(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // Inline function:
    // int a, b;
    // cout<<"Enter value of a and b: ";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    
    //Default and constant arguments:
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money)<<" Rs after 1 year."<<endl;
    cout<<"For Vip: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money, 1.1)<<" Rs after 1 year."<<endl;

    return 0;
}
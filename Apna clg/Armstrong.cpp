#include<iostream>
#include <cmath>
using namespace std;

//missing something, code not running as expected.

int main(){

    int n;
    cin>>n;

    int sum=0;
    int originaln = n;

    while (n>0)
    {
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    
    if (sum==originaln)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }
    

    return 0;
}



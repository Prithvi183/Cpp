#include<iostream>
using namespace std;

int main()
{
    // Basic Example:
    int a = 4;
    int* ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator
    int* p = new int(10);
    cout<<"The value at address p is "<<*(p)<<endl;

    int* arr = new int[3];
    arr[0]=10;
    *(arr+1)=20;  // <--> Also written this way
    arr[2]=30;
    
    // Delete operator
    // delete[] arr;
    cout<<"The value at address arr[0] is "<<arr[0]<<endl;
    cout<<"The value at address arr[1] is "<<arr[1]<<endl;
    cout<<"The value at address arr[2] is "<<arr[2]<<endl;


    return 0;
}
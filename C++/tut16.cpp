#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

// This will not swap a and b.
// void swap(int a, int b)
// {                   // temp  a  b
//     int temp = a;   // 4     4  6
//     a = b;          // 4     6  6
//     b = temp;       // 4     6  4       Swapped values of a and b.
// }

    // Call by reference using pointers
void swap_pointer(int* a, int* b)
{                   // temp  a  b
    int temp = *a;   // 4     4  6
    *a = *b;          // 4     6  6
    *b = temp;       // 4     6  4       Swapped values of a and b.
}

    // Call by reference using Reference variable.
void swap_reference_var(int &a, int &b)
{                   // temp  a  b
    int temp = a;   // 4     4  6
    a = b;          // 4     6  6
    b = temp;       // 4     6  4       Swapped values of a and b.
}

int main()
{
    int num1=4, num2=6;
    cout<<"The sum of 4 and 6 is "<<sum(4,6)<<endl;

    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;

    // This will not swap num1 and num2.
    // swap(num1, num2);

    // swap_pointer(&num1, &num2);     //This will swap num1 and num2 using pointer reference.

    swap_reference_var(num1, num2);     //This will swap num1 and num2 using reference variable.
    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    
    return 0;
}
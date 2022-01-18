#include<iostream>
using namespace std;

    /* What is array?
        An array is a collection of items of similar type stored in a contiguous memory location.
    */
    
int main()
{
    // Array Example

    int marks[4] = {34, 45, 57, 89};
    cout << "These are the marks." << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //You can also change values of array.
    // marks[2] = {99};
    // cout << "These the are new values of marks." << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // Using for loop
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"The value of marks["<<i<<"] is "<<marks[i]<<endl;
    }
    
    //Pointers and arrays
    int* p = marks;
    cout << "The value of marks[0] is "<<*p<<endl;
    cout << "The value of marks[1] is "<<*(p+1)<<endl;
    cout << "The value of marks[2] is "<<*(p+2)<<endl;
    cout << "The value of marks[3] is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

    return 0;
}

/*Pointer Arithematic:
Formula:
    Address(new)=Address(current)+(i*size_of(data_type))
        p+i         p    ------->   (Suppose)
*/

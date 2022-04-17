// For, While and do-while loops in C++

#include <iostream>
using namespace std;

int main()
{
    /* Loops in C++
    There are Three types of Loops in C++:
        1.For Loop
        2.While Loop
        3.Do-While Loop
    */

    // For Loop in C++.

    // syntax of for loop
    /* for(initialization; condition; updation)
    {
        Loop body(C++ code)
    }
    */

    // for (int i = 0; i < 20; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // While Loop in C++.

    // syntax of While loop
    /* while (conditions)
    {
        C++ statements;
    }
    */

    // int i=1;
    // while (i<=40)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do-While loop in C++.

    // syntax of do-while loop
    /*
    do
    {
        C++ statements;
    }
    while (condition)
    */

    int i = 1;
    do
    {
        /* code */
        cout << i << endl;
        i++;
    } while (i <= 40);

    return 0;
}
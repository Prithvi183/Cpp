#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int Id;              
//     char favChar;
//     float salary;
// };

            //we can use above one OR below one for structure declaration

typedef struct employee
{
    /* data */
    int Id;
    char favChar;
    float salary;
}emp;

union money
{
    /* data */
    int rice;   //4 bytes
    char car;   //1 byte             union uses highest memory.
    float pounds;   //4 bytes          
};

int main()
{
    //Structure in C++.
    // struct employee prithvi;
                        //we can use above one OR below one.
    emp prithvi;
    prithvi.Id = 1;
    prithvi.favChar = 'p';
    prithvi.salary = 4000;

    cout<< "The value is "<<prithvi.Id<<endl;
    cout<< "The value is "<<prithvi.favChar<<endl;
    cout<< "The value is "<<prithvi.salary<<endl;

    //Unions in C++.
    union money m1;
    m1.rice = 34;       //Note: We can use only one value in unions.
    cout << "The value of rice is " << m1.rice << endl;
    m1.car = 'c';
    cout << "The value of car is " << m1.car << endl;

    //Enums in C++.
    enum Meal {Breakfast, Lunch, Dinner};
    Meal m2 = Dinner;
    cout<<m2<<endl;
    
    // cout<<Breakfast<<endl;
    // cout<<Lunch<<endl;
    // cout<<Dinner<<endl;

    return 0;
}
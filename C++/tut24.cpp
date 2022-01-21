#include <iostream>
using namespace std;

class Employee
{
    int id;
    int count;
    public:
    void setData(void){
        cout<<"Enter the id: ";
        cin>>id;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};

int
main()
{
    Employee prithvi;
    // prithvi.id = 1;
    // prithvi.count = 1; // Cannot do this cause id and count are private.

    prithvi.setData();
    prithvi.getData();

    return 0;
}
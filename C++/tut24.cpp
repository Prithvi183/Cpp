#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Static variable

public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    // Static function
    static void getCount(void){
        // cout<<id; // Throws an error cause static functions can only access static variables.
        cout<<"The value of the count is "<<count<<endl;
    }
};

// Count is the static data menber of the employee.
int Employee ::count; // Default value be 0.
// int Employee :: count = 1000; // If we have to start the count from 1000 we can do it by this way.

int main()
{
    Employee prithvi, rahul, shivam;
    // prithvi.id = 1;
    // prithvi.count = 1; // Cannot do this cause id and count are private.

    prithvi.setData();
    prithvi.getData();
    Employee :: getCount();

    rahul.setData();
    rahul.getData();
    Employee :: getCount();

    shivam.setData();
    shivam.getData();
    Employee :: getCount();

    return 0;
}
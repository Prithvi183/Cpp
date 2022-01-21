#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of the Employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The value of the id is " << id << endl;
    }
};

int main()
{
    // Employee prithvi, rahul, shivam, sharvari;
    // prithvi.setId();
    // prithvi.getId();

    Employee fb[4];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
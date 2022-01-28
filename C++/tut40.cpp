#include <iostream>
using namespace std;

/*
For a protected member:
                                Public Derivation   Private derivation   Protected derivation
        1. Private members.     Not Inherited       Not Inherited        Not Inherited
        2. Protected members.   Private             Private              Protected
        3. Public members.      Public              Private              Protected
*/

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The Marks obtained in maths are " << maths << endl;
    cout << "The Marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()               
{
    /*
    Notes:
    If we are inheriting B from A and C from B:[A ---> B ---> C]
    1. A is the base class for B and B is the base class for C.
    2. A-->B-->C is called Inheritance path.
    */
    
    Result prithvi;
    prithvi.set_roll_number(187);
    prithvi.set_marks(98.90, 94.00);
    prithvi.display();

    return 0;
}
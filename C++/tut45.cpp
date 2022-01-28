#include <iostream>
using namespace std;
/*
student ---> test
student ---> sports
test ---> result
test ---> result
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "Your result is here: " << endl
            << "Maths: " << maths << endl
            << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void get_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        get_marks();
        get_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result prithvi;
    prithvi.set_number(10);
    prithvi.set_marks(98, 94);
    prithvi.set_score(96);
    prithvi.display();
    return 0;
}
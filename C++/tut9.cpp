#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin>>age;

    // Selection control structure: if-else-if-else ladder.
    // if (age<18){
    //     cout<<"You cannot come to my party."<<endl;
    // }
    // else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass for the party."<<endl;
    // }
    // else{
    //     cout<<"You can come to the party."<<endl;
    // }

    // Selection control structure: Switch case statements.
    switch(age)
    {
        case 2:
        cout<<"Your age is 2.";
        break;
        case 18:
        cout<<"Your age is 18.";
        break;
        case 22:
        cout<<"Your age is 22.";
        break;
        default:
        cout<<"No such cases.";
        break;
    }

    return 0;
}
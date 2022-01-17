#include <iostream>
using namespace std;

int main(){

    int age = 20;
    switch (age) {
        case 10:
         cout<<"Too Young";
         break;
        case 20:
         cout<<"Teenager";
         break;
        case 40:
         cout<<"Adult";
         break;
        case 70:
         cout<<"Senior";
         break;
        default:
          cout<<"This case is default";

    }

    return 0;
}
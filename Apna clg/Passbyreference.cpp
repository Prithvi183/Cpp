#include <iostream>
using namespace std;

 void myfunct(int *x){
     *x = 100;
 }

 int main() {
     int var = 20;
     myfunct(&var);
     cout << var;

     return 0;
}
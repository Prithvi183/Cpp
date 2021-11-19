#include <iostream>
using namespace std;

    void Funct(int x){
        x = 100;
    }

int main(){
    int var=20;
    Funct(var);
    cout<<var<<endl;
    return 0;

}
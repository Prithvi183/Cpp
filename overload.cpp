#include <iostream>
using namespace std;

    void printname(int x){
        cout<<x<<endl;
    }

    void printname(float x){
        cout<<x<<endl;
    }

int main(){
    int a=18;
    float b=93.9;

    printname(a);
    printname(b);

    return 0;
}
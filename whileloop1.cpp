#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int num;
    int total = 0;

    while (a <= 5)
    {
        cin>>num;
        total += num;
        a++;
    }
    
    cout<<total<<endl;

    return 0;
}


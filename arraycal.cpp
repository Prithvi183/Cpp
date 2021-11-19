#include <iostream>
using namespace std;

int main(){
    
    int arr[]={11,35,62,55,989};
    int sum=0;

    for (int i=0; i<5; i++)
    {
         sum += arr[i];       
    }
    
    cout<<sum<<endl;

    return 0;
}

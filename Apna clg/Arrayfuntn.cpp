#include <iostream>
using namespace std;

void printArray(int arr[],int size){
        for(int i=0; i<=size; i++){
            cout<<arr[i]<<endl;
        }
}

int main(){

    int my_arr[3]={44,33,88};
    printArray(my_arr,3);

    return 0;
    
}
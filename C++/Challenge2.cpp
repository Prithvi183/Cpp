#include<iostream>
using namespace std;

int main()
{
    int i=0, Numbers[4] = {10, 7, 3, 11};
    cout<< Numbers[0] << endl;
    cout<< Numbers[1] << endl;
    cout<< Numbers[2] << endl;
    cout<< Numbers[3] << endl;

    // while (i<4){
    //     cout<<"The value of Numbers["<<i<<"] is "<<Numbers[i]<<endl;
    //     i++;
    // }

    do {
        cout<<"The value of Numbers["<<i<<"] is "<<Numbers[i]<<endl;
        i++;
    } while (i<4);
    
    return 0;
}



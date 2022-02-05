#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    // Function objects (Functor): Function wrapped in a class so that it can be available like an object.
    int arr[] = {1, 24, 3, 4, 68, 2};
    sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
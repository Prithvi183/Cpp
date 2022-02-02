#include<iostream>
using namespace std;

// int funcAvg(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

// float funcAvg2(int a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }

template<class t1, class t2>
float funcAvg2(t1 a, t2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b){
        T temp = a;
        a = b;
        b = temp;
}

int main()
{
    float x; 
    x = funcAvg2(6, 7);
    cout<<"The average value of the given numbers is "<<x<<endl;

    int m = 5, n = 8;
    swapp(m, n);
    cout<<"The swapped value of m is "<<m<<" and the swapped value of n is "<<n<<endl;


    return 0;
}
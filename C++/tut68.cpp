#include <iostream>
using namespace std;

template <class T>
class prithvi
{
public:
    T data;
    prithvi(T a)
    {
        data = a;
    }
    void display(){
        cout<<data<<endl;
    }
};

void func(int a){
    cout<<"I am first function "<<a<<endl;
}

template <class T>

void func(T a){
    cout<<"I am templatized function "<<a<<endl;
}

int main()
{
    // prithvi<int> p(10);
    // prithvi<float> p(1.50);
    // cout << p.data << endl;
    // p.display();

    func(4); // Exact match takes the highest priority

    return 0;
}
#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class prithvi{
        public:
        T1 a;
        T2 b;
        T3 c;
        prithvi(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }

};

int main()
{
    prithvi<> p(4, 4.5, 'P');
    p.display();
    cout<<endl;
    
    prithvi<char, int, float> s('S', 10, 3.14);
    s.display();


    return 0;
}
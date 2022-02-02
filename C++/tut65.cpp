#include <iostream>
using namespace std;

/*
Class Templates with Multiple Parameters(One or Two or More than two)
template <class T1, class T2,........(comma seperated)>;
class name OfClass{
    //body
};
*/

template <class T1, class T2>

class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main()
{
    myClass <int, char> obj(3, 'p');
    // myClass <int, float> obj(3, 1.5);
    // myClass <char, float> obj('a', 1.5);
    obj.display();
    return 0;
}
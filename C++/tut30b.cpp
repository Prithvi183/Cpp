#include<iostream>
using namespace std;

class point{
    int x, y;
        public:
            point(int a, int b){
                x = a;
                y = b;
            }

            void displayPoint(){
    cout<<"The point is ("<<x<<","<<y<<")"<<endl; 
}
};

// Create a function which takes 2 point object and computes the distance between thesse points.
// Formula : sqrt((x1-x2)^2 + (y1-y2)^2)
int main()
{
    point p(1,1);
    p.displayPoint();
    
    point q(4,6);
    q.displayPoint();

    

    return 0;
}
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> list1; // List of 0 length.
    // list<int> list2(7); // Empty list of size 7.
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(12);

    list<int> :: iterator iter;
    iter = list1.begin();
    
    return 0;
}
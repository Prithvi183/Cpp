#include<iostream>
#include<string>
#include<map>
using namespace std;

// Map is an associative array.

int main()
{
    map <string, int> marksMap;
    marksMap["prithvi"] = 98;
    marksMap["rahul"] = 88;
    marksMap["rohan"] = 78;

    map <string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        /* code */
    }
    

    return 0;
}
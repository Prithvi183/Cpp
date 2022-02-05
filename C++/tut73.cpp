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

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    map <string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    cout<<"The size value is: "<<marksMap.size()<<endl;
    cout<<"The Max size value is: "<<marksMap.max_size()<<endl;
    cout<<"The Empty's return value is: "<<marksMap.empty()<<endl;

    return 0;
}
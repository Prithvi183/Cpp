#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void set_data(int a, int b){
        id = a;
        price = b;
    }
    void get_data(){
        cout<<"Code for the item is "<<id<<endl;
        cout<<"Price of the item is "<<price<<endl;
    }
};

int main()
{ 
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[size];
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the Id and price of the item "<<i+1<<" ";
        cin>>p>>q;
        // (*ptr).set_data(p, q);
        ptr->set_data(p, q);
        ptr++;
    }

        for (i = 0; i < size; i++)
        {
            cout<<"Item number: "<<i+1<<" ";
            ptrTemp->get_data();
            ptrTemp++;
        }
        
    
    

    return 0;
}
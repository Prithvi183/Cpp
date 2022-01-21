#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void){
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(){
        cout<<"Enter Id for your item no "<<counter+1<<": ";
        cin>>itemId[counter];
        cout<<"Enter Price for the item no "<<counter+1<<": ";
        cin>>itemPrice[counter];
        counter++;
}

void shop :: displayPrice(){
        for (int i = 0; i < counter; i++)
        {
            /* code */
            cout<<"The Price for the item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
        }
        
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    //we can make a for loop for this so that we dont need t0 repeat these lines.gc 
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
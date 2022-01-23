#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r); // Here r value can be 0.04.
    BankDeposit(int p, int y, int r); // Here r value can be 4.
    void Show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = (float)r/100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: Show(){
    cout<<"Principal amount was "<<principal
    <<". Return value after "<<years<<" yrs is "<<returnValue<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p, y r: ";
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.Show();
    
    cout<<"Enter the value of p, y R: ";
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.Show();
    return 0;
}
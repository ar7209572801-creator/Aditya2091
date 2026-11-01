#include<iostream>
using namespace std;
int main()
{
    int pin,amount;

    pin=1234;
    amount=200000;

    cout<<"Enter your pin:";
    cin>>pin;

    if(pin==1234)
    {
        cout<<"Your pin is correct"<<endl;

    cout<<"Enter the amount you want to withdraw:";
    cin>>amount;

        if(amount<=200000)
        {
        cout<<"Your transaction is successful"<<endl;
        }
        else
        {
        cout<<"Your transaction is unsuccessful"<<endl;
        }
    }

    else
    {
        cout<<"Your pin is incorrect"<<endl;
    }
}
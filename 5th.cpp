#include<iostream>
using namespace std;
int main()
{
    int number,i,final;
    cout<<"Enter your number:"<<endl;
    cin>>number;

    for(i=1;i<=10;i++)
    {
        final=number*i;
        cout<<number<<"*"<<i<<"="<<final<<endl;
    }
    return 0;
}
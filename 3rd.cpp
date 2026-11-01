#include<iostream>
using namespace std;
int main()
{
    int add,sub,mul,div,rem,a,b,choice;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<"Enter your choice:"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            add=a+b;
            cout<<"Addition of two numbers is:"<<add<<endl;
            break;

        case 2:
            sub=a-b;
            cout<<"Subtraction of two numbers is:"<<sub<<endl;
            break;

        case 3:
            mul=a*b;
            cout<<"Multiplication of two numbers is:"<<mul<<endl;
            break;

        case 4:
            div=a/b;
            cout<<"Division of two numbers is:"<<div<<endl;
            break;

        case 5:
            rem=a%b;
            cout<<"Remainder of two numbers is:"<<rem<<endl;
            break;

        default:
            cout<<"Invalid choice"<<endl;
    }
}
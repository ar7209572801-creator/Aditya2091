#include<iostream>
using namespace std;
int largest(int x,int y)
{
    if(x>y)
    {
        cout<<x<<"is greater";
        return x;
    }
    else
    {
        cout<<y<<"is greater";
        return y;
    }
}
int main()
{   
    int result=largest(5,4);
    return 0;
}
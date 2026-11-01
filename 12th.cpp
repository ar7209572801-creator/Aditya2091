#include<iostream>
using namespace std;
int main()
{
    int marks;
    int totalmarks=100;

    cout<<"Enter marks obtained:";
    cin>>marks;

    int grade;

    if(grade<33)
    { cout<<"Fail";}

    else if(grade>=33 && marks<40)
    { cout<<'F';}

    else if(grade>=40 && marks <50)
    {cout<<'E';}

    else if(grade>=50 && marks<60)
    { cout<<'D';}

    else if(grade>=60 && marks<70)
    {cout<<'C';}

    else if(grade>=70 && marks<80)
    {cout<<'B';}

    else if(grade>=80 && marks<90)
    {cout<<'A';}

    else
    {cout<<'S';}

    return 0;
}
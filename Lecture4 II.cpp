#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Give 2 floating point numbers as input"<<endl;
    cin>>a>>b;
    if(a>0.01 || b>a)
    {
        cout<<"The condition in if statement is correct";
    }

    int marks;
    cout<<"Student, please enter the marks to calculate the grade : ";
    cin>>marks;
    if (marks>90)
    {
        cout<<"A";
    }
    if (marks<90 && marks>80)
    {
        cout<<"B";
    }
    if (marks<80 && marks>70)
    {
        cout<<"C";
    }
    if (marks<70)
    {
        cout<<"Pass";
    }

    int a,b,c,d;
    cout<<"Give three integers as input : a,b,c"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>d)
    {
        cout<<"haha";
    }
    else if(a>b && c<d)
    {
        cout<<"hehe";
    }
    else
    {
        cout<<"huhu";
    }

    int a;
    cout<<"Enter a integer a ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"The value of a is 1";
        break;
    case 2:
        cout<<"The value of a is 2";
        break;
    default:
        cout<<"Default will always be printed";
        break;
    }
    return 0;
}
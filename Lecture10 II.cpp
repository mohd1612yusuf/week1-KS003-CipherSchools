#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The values of a and b after swapping are : "<<a<<" "<<b;
    return;
}
void fun(int &a, int b)
{
    a=99999;
    b=99999;
    cout<<"The values of a and b inside fun function are: "<<a<<" "<<b;
    }
int main()
{
    int a,b;
    int c;
    a=4;
    b=6;
    c=75;
    int d;
    cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;
    cout<<"The value of c is "<<c<<endl;
    swap(a,b);
    cout<<"The values of a and b after swapping outside the function are "<<a<<" "<<b;
    fun(a,b);
    return 0;
}
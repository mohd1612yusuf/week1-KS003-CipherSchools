#include <iostream>
using namespace std;
int sum(int, int);
int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(3,5);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}
int sum(int a, int b)
    {
        int c;
        c=a+b;
        return c;
    }
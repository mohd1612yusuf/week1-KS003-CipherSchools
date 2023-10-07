#include <iostream>
using namespace std;
int compare(int a, int b)
    {
        int c;
        if (a>b)
        {
            c=a;
        }
        else
        {
            c=b;
        }
        return c;
    }
    int sum(int a, int b)
    {
        int c;
        c=a+b;
        return c;
    }
int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(a,b);
    cout<<c;
    return 0;
}
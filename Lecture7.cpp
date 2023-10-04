#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        int count;
        cout << "chocolates";
        count++;
        if (count > 100)
            break;
    }

    int password;
    do
    {
        cin >> password;
    } while (password < 999999);

    cout << "Enter the password: " << endl;
    cin >> password;
    while (password < 999999)
    {
        cout << "The password does not meet the required conditions. Please enter the password again. ";
        cin >> password;
    }
    cout << "The user has now entered a correct password" << endl;

    int i;
    for (i = 0;; i++)
    {
        cout << i << " ";
        if (i > 100)
            break;
    }
    return 0;
}
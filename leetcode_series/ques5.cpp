// check whether no. is of the power 2 or not.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    bool ans = 0;
    for (int i = 0; i < 31; i++)
    {
        int x = pow(2, i);
        if (num == x)
        {
            ans = 1;
        }
    }
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
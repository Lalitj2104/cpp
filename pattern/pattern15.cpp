#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the number";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + n - i;
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
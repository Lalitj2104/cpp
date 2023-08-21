#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the number";
    cin >> n;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
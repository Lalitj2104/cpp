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
            cout << j;
            j++;
        }
        int start = i - 1;
        while (start)
        {
            cout << start;
            start -= 1;
        }
        cout << endl;
        i++;
    }
}
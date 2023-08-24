#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the number";
    cin >> n;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
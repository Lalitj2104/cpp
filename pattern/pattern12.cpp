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
        while (j <= n)
        {
            char ch = 'A' + j-i +n;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}
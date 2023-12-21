#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int q, w;
    cin >> q >> w;
    int x = q + w;
    int arr[x];

    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
    }
    for (int j = q; j < x; j++)
    {
        cin >> arr[j];
    }

    sort(arr, arr + x);

    for (int i = 0; i < x; i++)
    {
        cout << arr[i];
    }
}
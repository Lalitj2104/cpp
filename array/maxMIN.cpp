#include <iostream>
using namespace std;
#include <limits.h>

int Maax(int num[], int m)
{
    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int minni(int num[], int n)
{
    int Min1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        Min1 = min(Min1, num[i]);
    }
    return Min1;
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = Maax(arr, size);
    int min = minni(arr, size);
    cout << "Maximum number is:" << max << endl;
    cout << "Minimum number is:" << min << endl;
}
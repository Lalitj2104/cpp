#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int key, size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    int result = search(arr, size, key);
    if (result == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}
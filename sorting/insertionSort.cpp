#include <iostream>
using namespace std;

void insertion(int arr[], int size)
{
    cout << "Enter the elements in array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void result(int arr[], int size)
{
    cout << "sorted array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }
}

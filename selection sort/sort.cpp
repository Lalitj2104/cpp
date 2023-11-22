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

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {

                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void result(int arr[], int size)
{
    cout << "array in sorted order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[100], size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    insertion(arr, size);
    selection_sort(arr, size);
    result(arr, size);
}
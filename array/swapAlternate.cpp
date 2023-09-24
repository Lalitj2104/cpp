#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{
    int start = 0;
    int end = 1;
    for (int i = 0; i < size; i++)
    {
        if (start < size && end < size)
        {
            swap(arr[start], arr[end]);
            start += 2;
            end += 2;
        }
    }
}

int main()
{
    int size, arr[100];
    cout << "enter size of array: " << endl;
    cin >> size;
    cout << "enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    alternateSwap(arr, size);
    cout << "alternate Swapped array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }
}
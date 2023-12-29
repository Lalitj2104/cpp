#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    mid = start + ((end - start) / 2);
    while (start < end)
    {
        if (arr[mid] == key)
        {

            if (arr[mid + 1] > key)
            {
                cout << "last key element at: " << (mid + 1);
            }
            else if (arr[mid + 1] == key)
            {
            }
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            mid = start + ((end - start) / 2);
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            mid = start + ((end - start) / 2);
        }
    }
}

int main()
{
    int size, key, arr[100];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter the element of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key u want to search: " << endl;
    cin >> key;
    search(arr, size, key);
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int s, int e, int key)
{

    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid < key])
    {
        return binarySearch(arr, size, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, size, s, mid - 1, key);
    }
}



void insertion(int arr[], int size)
{
    cout << "Enter the elements u want in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[100], size, key;
    cout << "Enter the size of array: ";
    cin >> size;
    insertion(arr, size);
    cout << "Enter the element to want to search: ";
    cin >> key;
    int s = 0;
    int e = size - 1;

    int result = binarySearch(arr, size, s, e, key);
    cout << "The element u want to search is at index: " << result;
}
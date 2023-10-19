// peak element in a mountain array
#include <iostream>
using namespace std;
int peakElement(int arr[], int len)
{
    int start = 0;
    int end = len - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int num, arr[100], len, key;
    cout << "enter number of elements in array :";
    cin >> len;
    cout << "enter the elements in the array: ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int result = peakElement(arr, len);
    cout << "the peak element for this array is: " << result << endl;
}
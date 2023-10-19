#include <iostream>
using namespace std;

int fOccurence(int arr[], int len, int key)
{
    int start = 0;
    int end = len - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int len, int key)
{
    int start = 0;
    int end = len - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num, arr[100], len, key;
    cout << "enter number of test cases :";
    cin >> num;
    while (num--)
    {
        cout << "enter number of elements in array :";
        cin >> len;
        cout << "enter the elements in the array: ";
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        cout << "enter number whose occurence we have to find: ";
        cin >> key;

        int result = fOccurence(arr, len, key);
        int result2 = lastOccurence(arr, len, key);
        int finalResult = (result2 - result) + 1;
        cout<<"Total number of occurence is: "<<finalResult<<endl;
    }
}
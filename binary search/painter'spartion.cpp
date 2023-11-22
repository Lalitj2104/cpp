#include <iostream>
using namespace std;
void insertion(int arr[], int size)
{
    cout << "Enter the pages in each book: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}


int isPartition(int arr[], int size, int painter, int mid)
{
    int ptCount = 1;
    int wallSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (wallSum + arr[i] <= mid)
        {
            wallSum += arr[i];
        }
        else
        {
            ptCount++;
            if (ptCount > size || arr[i] > mid)
            {
                return false;
            }
            wallSum = arr[i];
        }
    }
    return true;
}



int partition(int arr[], int size, int painter)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPartition(arr, size, painter, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[100], size, painter;
    cout << "Enter the number of walls: " << endl;
    cin >> size;
    insertion(arr, size);
    cout << "Enter the number of painters:" << endl;
    cin >> painter;
    int result = partition(arr, size, painter);
}
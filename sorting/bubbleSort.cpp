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
void bubbleSort(int arr[], int size)
{
    bool flag =false;
    while (size--)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                flag=true;
            }
            else
            {
                continue;
            }
        }
        if(flag==false){
            break;
        }
    }
}
int main()
{
    int arr[100], size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    insertion(arr, size);
    bubbleSort(arr, size);
    result(arr, size);
}
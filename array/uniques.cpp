#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int result=0;
    for (int i = 0; i < size ; i++)
    {
            result = arr[i] ^ result;
    }
    return result;
}
int main()
{
    int num, arr[100], size;
    cout << "Enter number of test cases: " << endl;
    cin >> num;
    cout << "Enter number of elements in the array: " << endl;
    cin >> size;
    cout << "Enter elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = unique(arr, size);
    cout << "Unique element in the given array is : " << result<< endl;
}
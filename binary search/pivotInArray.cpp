#include <iostream>
using namespace std;
int pivotArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            if (arr[mid] < arr[mid - 1])
            {
                return mid;
            }
        }
        else if(arr[mid]>arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}  
int getPivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;  
}




int main()
{
    int size, arr[100];
    int i=0;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    cout << "Enter the elements in array: " << endl;
    while(i<size)
    {
        cin >> arr[i];
        i++;
    }
    int result=pivotArray(arr, size);
    int result1=getPivot(arr,size);
    cout << "pivot in the array is at index : " <<result;
    cout << "pivot in the array is at index : " <<result1;
   
}

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


void insertionSort(int arr[],int size){
     for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
          for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
          }
          arr[j+1]=temp;
     }
}
int main(){
    int arr[100],size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    insertion(arr,size);
    insertionSort(arr,size);
    result(arr,size);
}
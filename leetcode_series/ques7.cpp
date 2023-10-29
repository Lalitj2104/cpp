//search in rotated and sorted array.
#include <iostream>
using namespace std;

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

int binarySearch(int arr[], int size,int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}


int main(){
    int arr[100],size,key;
    cout<<"Enter the ssize of array:";
    cin>>size;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element u wan to search: "<<endl;
    cin>>key;
    int Pivot=getPivot(arr,size);

    if(key>=arr[Pivot] && key<=arr[size-1]){
        return binarySearch(arr,Pivot,(size-1),key);
    }
}

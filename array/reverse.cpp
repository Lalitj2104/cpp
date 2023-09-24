#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int top,end;
    top=0;
    end=size-1;
    while(top<=end){
        swap(arr[top],arr[end]);
        top++;
        end--;
    }
}

int main(){
    int size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    cout<<"array in reversed order is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }    
}
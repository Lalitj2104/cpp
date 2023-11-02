#include <iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    if (size ==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;

    }
    bool remain=linearSearch(arr+1,size-1,key);
    return remain;

}

void insertion(int arr[],int size){
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
    int arr[100],size,key;
    cout<<"enter the size of array: ";
    cin>>size;
    insertion(arr,size);
    cout<<"enter the element u want to search: ";
    cin>>key;
    int result=linearSearch(arr,size,key); 
    if(result==1){
        cout<<"element is present";
    }
    else{
        cout<<"element not found";
    }

}
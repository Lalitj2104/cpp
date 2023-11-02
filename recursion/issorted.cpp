#include <iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        int remain=isSorted(arr+1,size-1);
        return remain;
    }

}

int main(){
    int arr[100],size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    cout<<"enter the elements for the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool result=isSorted(arr,size);
    if(result==1){
        cout<<"sorted"<<endl;

    }
    else{
        cout<<"not sorted"<<endl;
        
    }
}
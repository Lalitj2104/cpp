#include <iostream>
using namespace std;

void reverseL(int arr[],int i,int j){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    reverseL(arr,i+1,j-1);
    //r everseL(arr,i,n-j-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    reverseL(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
void subarray(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(n);
    subarray(arr,n);
}
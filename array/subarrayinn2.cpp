#include<iostream>
using namespace std;
void subarray(int *arr,int n){
    int pre[100]={0};
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    int ls=0;
    for(int i=0;i<n-1;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=i>0?pre[j]-pre[i-1]:pre[j];
            ls=max(ls,sum);
        }
        
    }
    cout<<ls;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(n);
    subarray(arr,n);
}
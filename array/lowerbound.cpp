#include<iostream>
using namespace std;

int lowerBound(int arr[],int size,int x){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    if(arr[s]>x){
        return -1;
    }
    else if(arr[e]<x){
        return arr[e];
    }
    else{
        while(s<e){
            if(arr[m]==x){
                return arr[m];
                break;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else {
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        return arr[s-1];

    }
}

int main(){
    int arr[]={-1,-1,2,3,5};
    int s= sizeof(arr)/sizeof(s);
    int x;
    cout<<"Enter the number whose lower bound we have to serach"<<endl;
    cin>>x;
    int a=lowerBound(arr,s,x);
    cout<<a;
}
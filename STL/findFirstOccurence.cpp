#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    //first way
    if(binary_search(arr,arr+n,x)==true){
        cout<<lower_bound(arr,arr+n,x);
    }
    else{
        cout<<"Does not exist";
    }


    

}
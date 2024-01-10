//representing 2d diagonal matrix in array
//this will help in reducing the space to store diagonal matrix
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int x;
    cout<<"Enter the size of diagonal matrix: "<<endl;
    cin>>x;
    cout<<"Enter thee diagonal elements: "<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element u want to print"<<endl;
    int w,e;
    cin>>w>>e;
    if(w!=e){
        cout<<0<<endl;

    }
    else{
        cout<<arr[w-1]<<endl;
    }

}

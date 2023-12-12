#include <iostream>
using namespace std;
int main(){
    int z,x;
    cin>>z>>x;
    int arr[z][x];
    for(int i=0;i<z;i++){
        for(int j=0;i<x;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<z;i++){
        if(i%2!=0){
            for(int j=x-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=0;j<x;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
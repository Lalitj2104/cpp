#include<iostream>
using namespace std;
int main(){
    int z,x;
    cin>>z>>x;
    int arr[z][x];
    for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }

    cout << sum<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int z,x;
    cin>>z>>x;
    int arr[z];
    for(int i=0;i<z;i++){
        cin>>arr[i];
    }
    sort(arr,arr+z);
    
    
    cout<<arr[z-x];
}

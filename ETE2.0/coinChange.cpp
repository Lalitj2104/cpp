#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    vector<int> arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=x-1;i>=0;i--){
        if(y==0){
            break;
        }
        if(y<arr[i]){
            continue;
        }
        ans+=y/arr[i];
        y=y%arr[i];   
    }
    cout<<ans;
}
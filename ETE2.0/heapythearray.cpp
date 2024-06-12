#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=8;
    // cin>>x;
    vector<int> arr={2,4,1,7,10,9,5,3};
    // for(int i=0;i<x;i++){
    //     cin>>arr[i];
    // }



    make_heap(arr.begin(),arr.end(),greater<int>());

    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}
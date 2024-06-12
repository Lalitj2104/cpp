#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==0){
        cout<<0<<endl;
    }
    if(n==1){
        cout<<arr[0];
    }
    int p1=arr[0];
    int p2=0;
    for(int i=1;i<n;i++){
        int c=max(p1,(p2+arr[i]));
        p2=p1;
        p1=c;
    }
    cout<<p1;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int y;
    cin>>y;
    int p=-1;
    int q=-1;
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(v[i]+v[j]==y){
                p=v[i];
                q=v[j];
                break;
            }
        }
    }
    cout<<p<<" "<<q;
}
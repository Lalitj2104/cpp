#include <bits/stdc++.h>
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
    int e=-1;
    for(int i=x-1;i>=0;i--){
        if(y==v[i]){
            e=i;
            break;
        }
    }
    cout<<e<<endl;
}
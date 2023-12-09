#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    vector<int> v1;
    int q,w;
    cin>>q>>w;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }


    for(int i=0;i<w;i++){
        int y;
        cin>>y;
        v1.push_back(y);
    }


    for(int i=0;i<w;i++){
        v.push_back(v1[i]);

    }

    set <int>  st(v.begin(),v.end());

    for(auto i:st){
        cout<<i<<" ";
    }
    

}
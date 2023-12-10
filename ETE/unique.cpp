#include <iostream>
#include <vector>
#include <map>
using namespace std;
void frequency(vector<int> x,int w){
    map<int,int> mp;
    for(int i=0;i<w;i++){
        mp[x[i]]++;
    }
    for(auto i:mp){
        if(i.second==1){
            cout<<i.first<<endl;
        }
    }
}
int main(){
    vector<int> v;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    frequency(v,x);
}
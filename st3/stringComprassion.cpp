#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <char> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    map <char,int> mp;
    for(int i=0;i<n;i++){
        mp[x[i]]++;
    }

    for(auto i:mp){
        if(i.second==1){
            cout<<i.first;
        }
        else{
            cout<<i.first<<i.second;

            
        }
    }

}
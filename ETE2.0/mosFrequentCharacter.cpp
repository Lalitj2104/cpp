#include<bits/stdc++.h>
using namespace std;
void frequent(string x){
    map<char,int> mp;
    for(int i=0;i<x.length();i++){
        mp[x[i]]++;
    }
  char w='\0';  
  int q=0;
   for(auto i: mp){
    if(i.second>q){
        q=i.second;
        w=i.first;
    }
   }
   cout<<w;
}
int main(){
    string x;
    cin>>x;
    frequent(x);
}
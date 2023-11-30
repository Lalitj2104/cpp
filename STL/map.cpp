#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="I";
    m[2]="coding";
    m[10]="chill";

    m.insert({6,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"present or not: "<<m.count(6)<<endl;
    m.erase(6);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}
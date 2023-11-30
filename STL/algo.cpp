#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int  main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    int a =10;
    int b=20;
    cout<<"max: "<<max(a,b)<<endl;  
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"after swap: "<<a<<" "<<b<<endl;

    string ab="abcd";
    reverse(ab.begin(),ab.end());
    cout<<"reversed string: "<<ab<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate: "<<endl;
    for(int i:v){
        cout<<i<<endl;
    }cout<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<endl;
    }
}
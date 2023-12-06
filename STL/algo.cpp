#include<iostream>
#include <bits/stdc++.h>
// #include<vector>
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
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    int cnt=count(v.begin(),v.end(),3);
    cout<<cnt <<endl;

    auto it=find(v.begin(),v.end(),3);
    cout<<it-v.begin()<<endl;

    bool result=binary_search(v.begin(),v.end(),7);
    cout<<result<<endl;

    auto im=lower_bound(v.begin(),v.end(),5);
    cout<<im-v.begin()<<endl;

    // int cc=upper_bound(v.begin(),v.end(),5);
    // cout<<cc-v.begin()<<endl;



}
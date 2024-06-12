#include<bits/stdc++.h>
using namespace std;

void preorder(vector<int>v,int index)
{
    if(index>=v.size() || v[index]==-1)
    return;
    cout<<v[index]<<" ";
    preorder(v,2*index+1);
    preorder(v,2*index+2);
}

int main()
{
    string s;
    getline(cin,s);
    istringstream iss(s);
    string value;
    vector<int>arr;
    while(iss>> value){
        if(value=="-1"){
            arr.push_back(-1);
        }
        else{
            arr.push_back(stoi(value));
        }
    }
    preorder(arr,0);
}
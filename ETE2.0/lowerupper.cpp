#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(islower(x[i])){
            x[i]=toupper(x[i]);
        }
        else{
            x[i]=tolower(x[i]);
        }
    }
    cout<<x;
}
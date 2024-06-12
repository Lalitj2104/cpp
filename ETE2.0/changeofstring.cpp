#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(i%2==0){
            int y=x[i]-'0';
            y+=1;
            x[i]=y+'0';
        }
        else{
            int w=x[i]-'0';
            w-=1;
            x[i]=w+'0';
        }
    }
    cout<<x;
}
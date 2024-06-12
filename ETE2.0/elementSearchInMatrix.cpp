#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    vector<vector<int>> v(x,vector<int>(y));
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>v[i][j];
        }
    }
    int s;
    cin>>s;
    int flag=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(v[i][j]==s){
                flag=1;
                break;
            }
        }
    }
    cout<<flag;

}
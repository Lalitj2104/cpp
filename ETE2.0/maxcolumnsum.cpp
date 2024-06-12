#include<bits/stdc++.h>
using namespace std;
int main(){
    int size ;
    cin>>size;
    vector<vector<int>> v(size,vector<int>(size));
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>v[i][j];
        }
    }
    int x=0;
    int y=0;
    for(int i=0;i<size;i++){
        int c=0;
        for(int j=0;j<size;j++){
            c +=v[j][i];
        }
        y=max(c,y);
        x=max(x,i);

    }

    cout<<x<<" "<<y;
}
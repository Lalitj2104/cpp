#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector <int> y(x);

    for(int i=0;i<x;i++){
        cin>>y[i];
    }

    bool flg=false;
    int a=0;
    for (int i = 0; i < x;)
    {
        if(a==x-1){
            flg=true;
            break;
        }
        if(y[a]==0){
            break;
        }
        a+=y[a];
        i=a;
        if(a>=x ||a<=0){
        break;
    }
    }
    
    cout<<flg;
}
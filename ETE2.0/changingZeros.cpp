#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string w=to_string(x);
    for(int i=0;i<w.length();i++){
        if(w[i]=='0'){
            w[i]='5';
        }
    }

    cout<<w;
}
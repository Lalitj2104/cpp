#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int w=x.length();
    int q=x.length()/2;
    // if(q%2==0){
        for(int i=0;i<q;i++){
           if(x[i]!=x[w-i-1]){
                cout<<false;
           }
        }
        cout<<true;
    // }
    // else{
    //    for(int i=0;i<q;i++){
    //        if(x[i]!=x[q+i]){
    //             cout<<false;
    //        }
    //     } 
    // }
}
#include<iostream>
using namespace std;

int fact(int n){
    int facto=1;

    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return facto;
}


int nCr(){
    int n, r;
    cin>>n>>r;
    int nume=fact(n);
    int denom=fact(r)*fact(n-r);

    int ans=nume/denom;
    return ans;
}

int main(){
    int NCR=nCr();
    cout<<NCR;
}
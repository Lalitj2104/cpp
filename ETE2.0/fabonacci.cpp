#include <bits/stdc++.h>
using namespace std;
int fib(int num){
    if(num==1 ||num==2){
        return 1;
    }
    return fib(num-1)+fib(num-2);
}
int main(){
    int num;
    cin>>num;
    int a=fib(num);
    cout<<a;
}
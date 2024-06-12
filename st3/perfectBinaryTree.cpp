#include<bits/stdc++.h>
using namespace std;
bool isPerfect(vector<int> &arr){
    int n=arr.size();
    int height=log2(n)+1;
    int expected=pow(2,height)-1;
    return n==expected ? true:false;
}

int main(){

    vector<int> x={1,2,3,4,5,6,7};
    cout<<isPerfect(x);
} 
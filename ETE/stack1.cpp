#include <iostream>
#include <bits/stdc++.h>
using namespace std;

   void print(stack<int> temp){
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main(){
  stack<int> st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    st.push(temp);
  }
}

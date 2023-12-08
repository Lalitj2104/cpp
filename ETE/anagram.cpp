#include <bits/stdc++.h>
using namespace std;
int main(){
    string str,str1;
    getline(cin,str);
    getline(cin,str1);
    int n=str.length();
    int n1=str1.length();
    sort(str.begin(),str.end());
    sort(str1.begin(),str1.end());
    if(str==str1){
        cout<<"anagram"<<endl;
    }
    else{
        cout<<"not anagram"<<endl;
    }

}
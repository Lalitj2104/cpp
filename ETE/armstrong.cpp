#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0;
    int temp=num;
    while(temp!=0){
        int rem= temp%10;
        ans=ans+(rem*rem*rem);
        temp=temp/10;
    }
    if(ans==num){
        cout<<num<<" is an armstrong";
    }
    else{
        cout<<num<<" is not an armstrong";
        
    }
}
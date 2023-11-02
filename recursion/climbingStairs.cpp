#include <iostream>
using namespace std;
int climbStairs(int num){
    if(num<0){
        return 0;
    }
    if(num==0){
        return 1;
    }  
    int result= climbStairs(num-1)+climbStairs(num-2) ;
    return result;
}

int main(){
    int num;
    cout<<"enter the numbers of stairs u want to climb: "<<endl;
    cin>>num;
    int result=climbStairs(num);
    cout<<"number of ways to climb is: ";
    cout<<result<<endl;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    int newNum=0;
    while(num!=0){
        int r=num%10;
        newNum=newNum*10+r;
        num/=10;
    }
    if (newNum>=-(pow(2,31))&&newNum<=(pow(2,31)-1)){
    cout<<newNum<< endl;
    }
    else{
        cout<<0;
    }
}
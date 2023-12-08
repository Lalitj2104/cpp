#include <iostream>
using namespace std;
int main(){
    float num;
    cin >>num;
    if(num==0){
        cout<<"0 is netural number"<<endl;

    }
    else if(num<0){
        cout<<num<<" is a negative number"<<endl;
    }
    else{
        cout<<num<<" is a positive number"<<endl;
    }
}
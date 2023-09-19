#include<iostream>
using namespace std;

void Prime(int num){
    int flag=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
             flag=1;
        }
        else{
            continue;
        }
    }
    if (flag==0){
        cout<<"Yes,it is prime";
    }
    else{
        cout<<"No,it is not prime";
    }
}

int main(){
    int num;
    cin>>num;
    Prime(num);

}
#include<iostream>
using namespace std;
int main(){
    int num=10;
    switch(num){
        case '1':cout<<"charater"<<endl;
        break;
        case 10: cout<<"Integer"<<endl;switch(num){
            case 1 : cout<<num<<endl;
            break;
            case 10: cout<<num<<endl;
            break;
        }
        break;
        default: cout<<"this is a default case"<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int x=20;
    int *ptr=&x;
    int **pt=&ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<**pt<<endl;
    cout<<x<<endl;

}
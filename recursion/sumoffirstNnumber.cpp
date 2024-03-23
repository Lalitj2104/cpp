#include <iostream>
using namespace std;

int sum(int i,int s){
    if(i<1){
        return s;
    }

     return sum(i-1,s+i);   

    
}

int main(){
    int n;
    cout<<"Enter the number u want sum of: "<<endl;
    cin>>n;
    int result=sum(n,0);
    cout<<result;
}
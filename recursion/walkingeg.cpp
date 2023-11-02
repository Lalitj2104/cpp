#include <iostream>
using namespace std;
void walking(int num,int i){
    
    if(i==(num+1)){
        return;
    }
    cout<<i<<endl;
    i++;
    walking(num,i);
}
int main(){
    int num, i=0;
    cout<<"enter the steps to reach home: ";
    cin>>num;
    walking(num,i);
}
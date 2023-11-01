#include <iostream>
using namespace std;
void factorial(int num)
{
    int sum=1;
    if(num==1){
        cout<<sum;
    }
    else{
          
        sum=num*factorial(num-1);
    }
}
int main(){
    int num;
    cout<<"enter the number whose fact u have 2 find: ";
    cin>>num;
    factorial(num);
}
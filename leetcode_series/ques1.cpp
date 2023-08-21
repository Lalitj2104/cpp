//finding sum and product of a number and then find the difference .
#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    int product=1;
    cout<<"enter a number: ";
    cin>>num;
    while(num>0){
    int x=num%10;
    sum+=x;
    product*=x;
    num/=10;
    }
    int result=product-sum;
    cout<<sum<<endl;
    cout<<product<<endl;
    cout<<result<<endl;
}
#include <iostream>
using namespace std;
int power(int num,int pow){
    int result=num;
    for(int i=1; i<pow;i++){
        result*=num;
    }
    return result;


}

int main(){
    int num,pow;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Power: ";
    cin>>pow;
    int result=power(num,pow);
    cout<<"the result is: "<<result;
}
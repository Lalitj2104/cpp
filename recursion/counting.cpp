#include <iostream>
using namespace std;
void count(int num){
    if (num==0){
        return ;
    }
    cout<< num<<endl;
    count(num-1);

}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    count(num);
    cout<<endl;
}
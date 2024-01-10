// for uppercase to lowercase we will add 32 to each character and subtract 32 when we want to make it lower. 
#include <iostream>
using namespace std;
int main(){
    char A[]="WELCOME";
    int i;
    for(i=0;A[i]!='\0';i++){
        A[i]+=32;
    }
    cout<<A;
}
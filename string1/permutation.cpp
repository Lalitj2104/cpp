#include<iostream>
using namespace std;

void perm(char s[],int k){
    static int A[10];
    static char R[10];
    int i;
    if(s[k]=='\0'){
        R[k]='\0';
        cout<<R<<endl;
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(A[i]==0){
                R[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
    }
}
int main(){
    char s[]="ABC";
    perm(s,0);
}
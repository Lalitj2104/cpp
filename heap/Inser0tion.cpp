//assume that we are making max heap


#include<bits/stdc++.h>
using namespace std;


void insert(int A[],int n){
    int temp,i=n;
    temp=A[n];
    while(i>1 &&temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

void createHeap(int A[],int n){
    int i;
    for(int i=2;i<=n;i++){
        insert(A,i);
    }
}


void deletion(int A[],int n){
    int x,i,j,temp;
    x=A[n];
    temp=A[1];
    A[1]=A[n];
    i=1;j=2*i;
    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            swap(A[i],A[j]);
            i=j;
            j*=2;
        }
        else{
            break;
        }

    }
    A[n]=temp;;
}

int main(){
    int H[]={0,2,5,8,9,4,10,7};
    createHeap(H,7);
    deletion(H,7);
    deletion(H,6);
    deletion(H,5);
    deletion(H,4);
    deletion(H,3);
    deletion(H,2);
    deletion(H,1);
    for(int i=1;i<=7;i++){
        cout<<H[i]<<" ";
    }
}
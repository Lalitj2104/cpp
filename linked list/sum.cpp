#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
}* first=NULL;

void create(int A[],int z){
    int i;
    node *last,*t;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<z;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void sum(node *z){
    int sum=0;
    while(z!=NULL){
        sum+=z->data;
        z=z->next;
    }

    cout<<"sum of the values: "<<sum<<endl;
}

//recursive approach
// int add(node *q){
//     if(q==0){
//         return 0;

//     }
//     else{
//         return add(q->next)+q->data;
//     }
// }


int main(){
    int A[]={2,4,6,8,10};
    create(A,5);
    sum(first);

}
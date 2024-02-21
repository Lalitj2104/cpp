#include <iostream>
using namespace std;

class node{
    public:
    node *prev;
    int data;
    node *next;
}*first;

void display(node *p){
    while(p!= NULL){
       cout<<p->data<<" ";
       p=p->next;
    }
    cout<<endl;
}


void create(int A[],int n){
    int i;
    node *t,*last;

    first=new node;
    first->prev=NULL;
    first -> data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){

        t=new node;
        t->prev=last;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    display(first);
}
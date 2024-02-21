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

void insert(node * p,int pos,int x){
    node *t,*q;
    if(pos<0){
        return;
    }
    if(pos==0){
        t=new node;
        t->prev=NULL;
        t->data=x;
        t->next=first;
        first=t;

    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->next=p->next;
        t->prev=p;
        p->next=t;
        if(p->next){
            p->next->prev=t;
        }
        
    }
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
    int b[]={}
    create(a,5);
    display(first);
    insert(first,3,20);
        display(first);

}
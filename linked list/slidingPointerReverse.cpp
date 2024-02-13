#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
}*first=NULL;

void display(node *p){
    while(p!= NULL){
       cout<<p->data<<" ";
       p=p->next;
    }
    cout<<endl;
}



void Rreverse(node*q,node * p){

    if (p!=NULL){
        Rreverse(p,p->next);
    p->next=q;
    }
    else{
        first=q;
    }
    
}

void Sreverse(node * &first){
    node *p=first;
    node *q,*r;
    q=NULL;
    r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }
    first=q;
    
}

void create(int A[],int n){ 
    int i;
    node *t,*last;
    first=new node;
    first -> data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    // Sreverse(first);

    Rreverse(NULL,first);
    display(first);


}


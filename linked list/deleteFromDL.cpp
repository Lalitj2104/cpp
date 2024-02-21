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

int deleteDL(node * &first,int pos){
    int x,i;
    node *p=first;
    if(pos<=0){
        return -1;
    }
    if(pos==1){
        if(p->next==NULL){
            delete first;
            first=NULL;
        }
        first=first->next;
        x=p->data;
        delete p;
        if(first){
            first->prev=NULL;
        }
    }
    else{
        for(i=0;i<pos-2;i++){
            p=p->next;
        }
        node *q=p->next;
        x=q->data;
        p->next=q->next;
        q->next->prev=p;
        delete q;
        q=NULL;


    }
    return x;
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
    deleteDL(first,3);
    display(first);
}
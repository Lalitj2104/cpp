#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first=NULL;

void isEmpty(node *&first){
    if(first==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}

void isFull(node *&first){
    node *temp=new node;
    if(temp==NULL){
        cout<<"stack is full"<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
void pop(node *&first){
    int x=-1;
    node *temp;
    temp=first;
    if(first==NULL){
        cout<<"stack underflow"<<endl;
    }
    else if(first->next==NULL){
        x=first->data;
        delete first;
        first=NULL;
    }
    else{
    first=first->next;
    x=temp->data;
    delete temp;
    temp=NULL;
    }
    cout<<"poped element is: "<<x<<endl;
}
void stackTop(node *&first){

    cout<<"Top element of stack is: "<<first->data<<endl;
}
void peak(node *&first,int index){
    node *p=first;
    int i;
    for(i=0;i<index-1;i++){
        p=p->next;
    }
    cout<<"peak element is: "<<p->data<<endl;

}
void push(node *&first,int x){
    node * t=new node;
    if(t==NULL){
        cout<<"stack overflow"<<endl;
    }
    t->data=x;
    if(first==NULL){
        t->next=NULL;
    }
    else{
    t->next=first;
    first=t;
    }
}

int main(){
  first=new node;
    push(first,10);
    push(first,20);
    push(first,30);
    stackTop(first);
    peak(first,2);
    pop(first);
}
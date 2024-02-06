#include<iostream>
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
}

// recursive function for display
// void display(node *p){
//     if(p!= NULL){
//        cout<<p->data<<" ";
//        display(p->next); 
//     }
// }

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

}
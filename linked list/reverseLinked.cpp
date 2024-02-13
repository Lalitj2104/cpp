#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first=NULL;



void display(node * p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int count(){
    node *p=first;
    int count=0;
    while(p!=NULL){
        ++count;
        p=p->next;
    }
    return count;
}

void reverseL(node * first){
    int x=count();

    int A[x]={};
    node *p=first;
    int i=0;
    while(p!=NULL){
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first,i--;
    while(p!=NULL){
        p->data=A[i--];
        p=p->next;
    }
}

void insert(int A[],int s){
    node*t,*temp;
    first= new node;
    first->data=A[0];
    first->next=NULL;
    t=first;


    for(int i=1;i<s;i++){
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        t->next=temp;
        t=temp;
    }

}
int main(){
    int A[]={1,2,3,4,5};
    insert(A,5);
    reverseL(first);
    display(first);
}
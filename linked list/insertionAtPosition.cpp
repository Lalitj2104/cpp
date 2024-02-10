#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
}*first;

void create(int A[],int s){
    int i;
    node *p,*temp;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    p=first;

    for(i=1;i<s;i++){
        temp=new node;
        temp->data=A[i];
        p->next=temp;
        temp->next=NULL;
        p=temp;

    }
}

void positionInsert(node *p,int pos){
    node *temp=new node;
    int x;
    cout<<"Enter the data: "<<endl;
    cin>>x;
    temp->data=x;
    node *z=p;
    for(int i=1;i<pos-1;i++){
        z=z->next;
    }
    temp->next=z->next;
    z->next=temp;

}


void print(node *f){
    while(f!=NULL){
        cout<<f->data<<" ";
        f=f->next;
    }
    cout<<endl;
}

int main(){
    int A[5]={2,3,4,5,6};
    create(A,5);
    print(first);
    int pos;
    cout<<"enter the position: "<<endl;
    cin>>pos;
    positionInsert(first,pos);
    print(first);

}
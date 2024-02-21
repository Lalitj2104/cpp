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
int count(node *p){
    int count =0;
    while(p!=NULL){
        ++count;
        p=p->next;
    }
    return count;
}

void middleElement(node *p){
    int x=count(p);
    int q=x/2;
    for(int i=0;i<q-1;i++){
        p=p->next;
    }
    int y= p->data;
    cout<<"Middle Element is: "<<y;

}


//another approah is using 2 pointers one is by one and another will be moved by 2 units in this way 1 will be the mid element as it moves half of the distance of the 2 one. 


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
    middleElement(first);

}
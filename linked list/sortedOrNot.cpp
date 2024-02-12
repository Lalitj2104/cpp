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

void sorted(node *first){
    node *p=first->next;
    int x=first->data;
    bool flag=0;
    while(p!=NULL){
        if(x>p->data){
            flag=1;
        }
        x=p->data;
        p=p->next;

    }
    if(flag==0){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
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
    int A[]={10,20,35,40,50};
    create(A,5);
    display(first);
    sorted(first);

}

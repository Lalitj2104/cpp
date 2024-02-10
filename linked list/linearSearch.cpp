#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
}*first=NULL;



node *linearSearch(node *p,int key){
    node* q;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p; 
        p=p->next;      
    }
    return NULL;
}

void display(node *p){
    while(p!= NULL){
       cout<<p->data<<" ";
       p=p->next;
    }
}

//recursive function for linear search
node *Rlinear(node*p,int key){
    if(p==NULL){
        return NULL;
    }
    if(p->data==key){
        return p;
    }
    return Rlinear(p->next,key);
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
    node *temp;
    int A[]={1,2,3,4,5};
    create(A,5);

    temp=linearSearch(first,4);
    if(temp){
        cout<<"key "<<temp->data<<" is found at: "<<temp<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }

    display(first);

}


#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert(node *&head ,node * &last){
    int d;
    cout<<"enter data: "<<endl;
    cin>>d; 
    node * temp=new node(d);
    if(head==NULL){
        head=last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    
    }
    
}

void print(node * &head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node *head=NULL;
    node *last=head;
    insert(head,last);
    insert(head,last);
    insert(head,last);
    insert(head,last);
    print(head);

}
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

void insert(node *&head,int d){
    
    node * temp=new node(d);
    
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

}
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
};
class stack{
    node *top;
    public:
    stack(){top=NULL;}
    void push(int x);
    void pop();
    void display();

};
void stack::push(int x){
    node *temp=new node;
    if(temp==NULL){
        cout<<"stack is full"<<endl;
    }
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}

void stack::pop(){
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        x=top->data;
        node *t=top;
        top=top->next;
        delete t;
    }
    cout<<"deleted element is: "<<x<<endl;
}

void stack::display(){
    node *t=top;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();

}
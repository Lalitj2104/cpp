#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){
        data=0;
        next=NULL;
    }
    node(int x){
        data=x;
        next=NULL;
    }
};

class queue{
    public:
    node *first;
    node *head;
    node *last;

    queue(){
        first=head=last=NULL;
    }
    void enqueue(int x);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void display();
    void top();
    void end();
};

void queue::display(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    node *temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void queue::top(){
    cout<<first->data<<endl;
}

void queue::end(){
    cout<<last->data<<endl;
}
void queue::enqueue(int x){
    if(head==NULL){
        head=new node(x);
        last=first=head;

    }
    else{
        node *temp=new node(x);
        last->next=temp;
        last=temp;
    }
}

void queue::dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        if(first==last){
            head=first=last=NULL;
        }
        else{
            head=head->next;
            first=NULL;
            first=head;
        }
    }
}
bool queue::isEmpty(){
    if(head==NULL){
        return 1;
    }
    return 0;
}

bool queue::isFull(){
    node *temp=new node;
    if(temp==NULL){
        return 1;
    }
    return 0;
}


int main(){
    queue q;
    q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    q.display();
    q.top();
    q.end();
    q.dequeue();
    q.display();
}
#include <iostream>
using namespace std;

class stack{
    int size;
    int top;
    int *s;
    public:
    stack(){
        size=8;
        top=-1;
        s=new int [size];
    }
    stack(int x){
        size=x;
        top=-1;
        s=new int[size];
    }
    void push(int x);
    void pop();
    void peek(int index);
    void stackTop();
    void isEmpty();
    void isFull();
   
};

void stack::isEmpty(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        // return 1;

    }
    else{
        cout<<"Stack is not empty"<<endl;
        // return 0;
    }
}
void stack::isFull(){
    if(top==(size-1)){
        cout<<"Stack is full"<<endl;
        // return 1;
    }
    else{
        cout<<"Stack is not full"<<endl;
        // return 0;
    }
}
void stack::peek(int index){
    int y=top-index+1;
    if(y<0){
        cout<<"Invalid position"<<endl;

    }
    else{
        cout<<s[y]<<endl;
    }

}

void stack::pop(){
    int q;
    if(top==-1){
    cout<<"Stack underflow."<<endl;        
    }
    else{
        q=s[top];
        s[top]=0;
        top--;
        cout<<"element poped is: "<<q<<endl;

    }
}

void stack::push(int x){
    if(top==(size-1)){
    cout<<"Stack overflow."<<endl;       
    }
    else{
        s[top+1]=x;
        top++;


    }
}
void stack::stackTop(){
    if(top==-1 ){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top element is: "<<s[top]<<endl;
    }
}

int main(){
    stack s(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.pop();
    // s.isEmpty();
    // s.isFull();
    // s.peek(4);
    s.stackTop();
}
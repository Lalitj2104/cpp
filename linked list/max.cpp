#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
}* first=NULL;

void create(int A[],int z){
    int i;
    node *last,*t;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<z;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void max(node *q){
    int max=first->data;
    while(q!=NULL){
        if(q->data>max){
            max=q->data;
        }
        q=q->next;
    }

    cout<<"maximum element is: "<<max<<endl;
}



int main(){
    int A[]={2,4,6,8,10};
    create(A,5);
    max(first);

}
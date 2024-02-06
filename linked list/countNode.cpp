#include<iostream>
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

void Count(node *p){
    int count =0;
    while(p!= NULL){
       ++count;
       p=p->next; 
    }

   cout<<"no. of nodes are: "<< count;
}

//recursive count function
// int Count(node *p){
//     if(p==0){
//         return 0;
//     }
//     else{
//         return Count(p->next)+1;
//     }
// }


int main(){
    int A[]={2,4,6,8,10};
    create(A,5);
    Count(first);

}

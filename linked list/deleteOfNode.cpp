#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
} *first = NULL;

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void create(int A[], int n)
{
    int i;
    node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Count(node *p){
    int count =0;
    while(p!= NULL){
       ++count;
       p=p->next; 
    }
    return count;

}

int deleteL(node *&first, int pos)
{

    node *p = first;
    int x = -1;
    if(pos<1 || pos>Count(p)){
        return -1;
    }
    else if (pos == 1)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        node *q;
        q = p->next;
        for (int i = 1; i < pos - 1 ; i++)
        {
            p = p->next;
            q = q->next;
        }
            p->next = q->next;
            x = q->data;
            delete q;
        
    }
    return x;
    
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    int y;
    cout << "enter position: " << endl;
    cin >> y;
    int a = deleteL(first, y);
    cout << "deleted element: " << a << endl;
    display(first);
}

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

void removeDuplicate(node *first)
{
    node *p = first;
    node *q = first->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
int main()
{
    int A[] = {10, 20, 20, 40, 50, 50, 50};
    create(A, 7);
    display(first);
    removeDuplicate(first);
    display(first);
}

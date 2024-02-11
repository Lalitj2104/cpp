#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

} *first;

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

void sortedInsert(node *p, int x)
{
     node *t, *q = NULL;

    t = new node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
int main()
{
    int A[] = {1, 2, 4, 5};
    create(A, 4);
    display(first);
    sortedInsert(first,0);
    display(first);
    sortedInsert(first,3);
    display(first);
    sortedInsert(first,6);
    display(first);
}

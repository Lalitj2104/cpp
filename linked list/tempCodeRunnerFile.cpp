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
    while (p !=first)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int deleteL(node *p, int pos)
{
    int i, x;
    node *q;
    if (pos < 0)
    {
        return -1;
    }
    if (pos == 1)
    {
        while (p->next != first)
        {
            p = p->next;
        }
        x = first->data;
        if (p == first)
        {
            free(first);
            first = NULL;
        }

        else
        {
            p->next = first->next;
            free(first);
            first = p->next;
        }
    }
    else
    {
        for (i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
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
    last->next=first;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    display(first);
    int q = deleteL(first, 1);
    display(first);
}

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *first;

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
    t->next = first;
}

void display(node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    }while (p != first);
    cout << endl;
}
int count(node *p)
{
    int count;
    while (p != first)
    {
        ++count;
    }
    return count;
}

void insert(node *first, int pos, int x)
{
    node *p, *t;
    int i;
    if (pos == 0)
    {
        t = new node;
        t->data = x;
        if (first == NULL)
        {
            first = t;
            first->next = NULL;
        }
        else
        {
            p = first;
            while (p->next != first)
            {
                p = p->next;
                p->next = t;
                t->next = first;
                first = t;
            }
        }
    }
    else
    {
        p = first;
        if (count(first) < pos)
        {
            cout << "Invalid pos" << endl;
        }
        for (i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t = new node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int A[] = {3, 5, 8};
    create(A, 3);
    // insert(first, 0, 10);
    // insert(first, 1, 20);
    // insert(first, 2, 30);
    // insert(first, 3, 40);
    // insert(first, 4, 50);
    display(first);
}
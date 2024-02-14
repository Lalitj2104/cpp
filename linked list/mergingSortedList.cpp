#include <iostream>
using namespace std;
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

void create1(int B[], int n, node *&second)
{
    int i;
    node *t, *last;
    second = new node;
    second->data = B[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = B[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

node *sortedMerge(node *list1, node *list2)
{

    node *first, *last;
    int x, y;
    x = list1->data;
    y = list2->data;
    if ((x) <= (y))
    {
        last = list1;
        first = last;
        list1 = list1->next;
        last->next = nullptr;
    }
    else
    {
        last = list2;
        first = last;
        list2 = list2->next;
        last->next = nullptr;
    }
    while (list1 != nullptr && list2 != nullptr)
    {

        if (list1->data <= list2->data)
        {
            last->next = list1;
            last = list1;
            list1 = list1->next;

            last->next = nullptr;
        }
        else if (list1->data > list2->data)
        {
            last->next = list2;
            last = list2;
            list2 = list2->next;
            last->next = nullptr;
        }
        if (list1 != nullptr)
        {
            last->next = list1;
        }
        else
        {
            last->next = list2;
        }
    }
    return first;
}

int main()
{
    int A[] = {1, 3, 5, 7};
    create(A, 4);
    int B[] = {2, 4, 6, 8, 10};
    node *second;
    create1(B, 5, second);
    // display(first);
    // display(second);
    node *x = sortedMerge(first, second);
    display(x);
}

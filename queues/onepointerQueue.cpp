#include <iostream>
using namespace std;
class queue
{
    int size;
    int p;
    int *a;

public:
    queue()
    {
        size = 5;
        p = -1;
        a = new int[size];
    }
    queue(int size)
    {
        this->size = size;
        p = -1;
        a = new int[size];
    }
    void enqueue(int x);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void first();
    void last();
    void display();
};

void queue::display()
{
    for (int i = 0; i <= p; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void queue::enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        a[p + 1] = x;
        p++;
    }
}
bool queue::isEmpty()
{
    if (p == -1)
    {
        return 1;
    }
    return 0;
}

bool queue::isFull()
{
    if (p == size - 1)
    {
        return 1;
    }
    return 0;
}

void queue::first()
{
    cout << "the first element in queue is: " << a[0] << endl;
}

void queue::last()
{
    cout << "the last element in queue is: " << a[p] << endl;
}

void queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    for (int i = 0; i < p; i++)
    {
        a[i] = a[i + 1];
    }
    p--;
}

int main()
{
    queue s(5);
    s.enqueue(1);
    s.enqueue(2);
    s.enqueue(3);
    s.enqueue(4);
    s.enqueue(5);
    s.display();
    s.dequeue();
    s.display();
}
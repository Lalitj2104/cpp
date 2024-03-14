#include <iostream>
using namespace std;
class pQueue
{
    int size;
    int front;
    int back;
    int *arr;

public:
    pQueue()
    {
        size = 10;
        front = 0;
        back = -1;
        arr = new int[size];
    }
    pQueue(int size)
    {
        this->size = size;
        front = 0;
        back = -1;
        arr = new int[size];
    }
    void enqueue(int x);
    void dequeue();
    bool isFull();
    bool isEmpty();
    void display();
};

bool pQueue::isEmpty()
{
    if (front == 0)
    {
        return 1;
    }
    return 0;
}

bool pQueue::isFull()
{
    if (front == size - 1)
    {
        return 1;
    }
    return 0;
}

void pQueue::enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue is Full" << endl;
    }
    arr[front] = x;
    front++;
    for (int i = back + 1; i < front; i++)
    {
        if (front - 1 == i)
        {
            break;
        }
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void pQueue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    back++;
    if (back + 1 == front)
    {
        back = -1;
        front = 0;
    }
}

void pQueue::display()
{
    for (int i = back + 1; i < front; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    pQueue q(10);
    q.enqueue(10);
    q.enqueue(0);
    q.enqueue(5);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
}

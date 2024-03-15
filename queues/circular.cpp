#include <iostream>
using namespace std;
class queue
{
    int size;
    int front;
    int back;
    int *a;

public:
    queue()
    {
        size = 10;
        front = back = -1;
        a = new int[size];
    }
    queue(int size)
    {
        this->size = size;
        front = back = -1;
        a = new int[size];
    }
    void enqueue(int x);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void top();
    void last();
};
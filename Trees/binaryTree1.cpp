#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new Node *[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        ;
        Q = new Node *[size];
    }
    void enqueue(Node *x);
    Node *dequeue();
    int isEmpty() { return front == rear; }
};
void Queue::enqueue(Node *x)
{
    if (rear == size - 1)
        cout << "Queue Full" << endl;
    else
    {
        rear++;
        Q[rear] = x;
    }
}
Node *Queue::dequeue()
{
    Node *x = NULL;
    if (front == rear)
        cout << "Queue is Empty" << endl;
    else
    {

        x = Q[front + 1];
        front++;
    }
    return x;
}
class Tree
{
    Node *root;

public:
    Tree() { root = NULL; }
    void CreateTree();
    void Preorder() { Preorder(root); }
    void Preorder(Node *p);
    void Postorder() { Postorder(root); }
    void Postorder(Node *p);
    void Inorder() { Inorder(root); }
    void Inorder(Node *p);
    void Levelorder() { Levelorder(root); }
    void Levelorder(Node *p);
    int Height() { return Height(root); }
    int Height(Node *root);
    void PrintTopView(Node *root);
};
void Tree::CreateTree()
{
    Node *p, *t = NULL;
    int x;
    Queue q(100);
    cout << "Enter root value " << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout << "Enter right child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void Tree::Preorder(struct Node *p)
{
    if (p)
    {

        cout << p->data << endl;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(struct Node *p)
{
    if (p)
    {

        Inorder(p->lchild);
        cout << p->data << endl;
        Inorder(p->rchild);
    }
}
void Tree::Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << endl;
    }
}
void Tree::Levelorder(struct Node *p)
{

    Queue q(100);
    cout << root->data << endl;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            cout << root->lchild->data << endl;
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
        }
        cout << root->rchild->data << endl;
        q.enqueue(root->rchild);
    }
}
int Tree::Height(struct Node *root)
{

    int x = 0, y = 0;
    if (root == 0)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}

void Tree::PrintTopView(Node *root){
    if(root==NULL){
        return;
    }

    map <int,int> topnode;

    queue <pair<Node *,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair <Node *,int> temp =q.front();
        q.pop();

        Node * frontNode =temp.first;
        int hd=temp.second;
    }
}

int main()
{
    Tree t;
    t.CreateTree();
    cout << "Preorder ";
    t.Preorder();
    cout << endl;
    cout << "Inorder ";
    t.Inorder();
    cout << endl
         << endl;

    return 0;
}
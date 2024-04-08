#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node * right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
    void Levelorder()
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
};


int findPosition(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
node *buildTreeFromPreorderInorder(int inorder[],int preorder[],int size,int &preIndex,int inorderStart,int inorderEnd){
    if(preIndex>=size || inorderStart>inorderEnd){
        return NULL;
    } 

    int element = preorder[preIndex++];
    node *root =new node(element);
    int pos=findPosition(inorder,size,element);
    root->left=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,pos-1);
    root->right=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,pos+1,inorderEnd);
    return root;
}


int main(){
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int size=7;
    int preIndex=0;
    int inorderStart =0;
    int inorderEnd=size-1;
    node *root=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

   root->Levelorder(); 
}
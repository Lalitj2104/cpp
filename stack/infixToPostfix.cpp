// #include<iostream>
// #include<string.h>
// using namespace std;

// class stack{
//     public:
//     int size;
//     int top;
//     char *s;

//     stack(){
//         size=30;
//         top=-1;
//         s=new char[size];
//     }
//     stack(int x){
//         size=x;
//         top=-1;
//         s=new char[size];
//     }

//     char pop(){
//     char q;
//     if(top==-1){
//    return 0;
//     }
//     else{
//         q=s[top];
//         s[top]=0;
//         top--;
//         return q;

//     }
// }

// void push(int x){
//     if(top==(size-1)){
//     cout<<"Stack overflow."<<endl;
//     }
//     else{
//         s[top+1]=x;
//         top++;

//     }
// }
// char stackTop(){
//     if(top==-1 ){
//         return 0;
//     }
//     else{
//         return s[top];
//     }
// }
// char isEmpty(){
//     if(top==-1){

//         return 1;

//     }
//     else{

//         return 0;
//     }
// }
// };

// int isoperand(char x){
//     if(x=='+' ||x=='-'||x=='*'||x=='/'){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int pre(char x){
//     if(x=='+'||x=='-'){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// char * convert(char *infix){
//     int y=strlen(infix)+1;
//     stack st(y);
//     char *post=new char[y];
//     int i,j=0;
//     while(infix[i]!='\0'){
//         if(isoperand(infix[i])){
//             post[j++]=infix[i++];
//         }
//         else{
//             if(pre(infix[i])>pre(st.stackTop())){
//                 st.push(infix[i++]);
//             }
//             else{
//                 post[j++]=st.pop();
//             }
//         }
//     }
//     while(!st.isEmpty()){
//         post[j++]=st.pop();
//     }
//     post[j]='\0';
//     return post;

// }

// int main(){
//     char *infix ="a+b*c-d";
//     char *postfix=convert(infix);
//     cout<<postfix<<endl;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char data;
    struct Node *next;
} *top = NULL;
void push(char x)
{
    struct Node *t;
    t = new Node;

    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop()
{
    struct Node *t;
    char x = -1;

    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int isBalanced(char *exp)
{
    int i;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}
int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

char *InToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len];

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
        postfix[j++] = pop();
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b*c-d/e";
    push('#');

    char *postfix = InToPost(infix);

    printf("%s ", postfix);

    return 0;
}
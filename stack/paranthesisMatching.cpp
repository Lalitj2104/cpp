#include<iostream>
using namespace std;
class stack{
    int size;
    int  top;
    char *s;
    public:
    stack(){
        size=20;
        top=-1;
        s=new char[size];
    }
    stack(int x){
        size=x;
        top=-1;
        s=new char[size];
    }

    void push(char x);
    void pop();
    bool isempty();
};
    void stack:: push(char x){
        s[top+1]=x;
        top++;
    }

    void stack:: pop(){
        top--;
    }
    bool stack:: isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }

int isBalance(char *z){
    stack s(10);
    for(int i=0;z[i]!='\0';i++){
        if(z[i]=='(')
            s.push(z[i]);
        else if(z[i]==')'){
            if(s.isempty()){
                return false;
            }
            s.pop();
        }
    }
    return s.isempty()?true:false;

}

int main(){
    char * s="((a+b))";
    int x=isBalance(s);
    if(x==1){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    

}
#include<iostream>
using namespace std;
class diagonal{
    private:
    int n;
    int *A;
    public:
    diagonal(){
        n=2;
        A=new int [2];
    }
    diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void Display();
    ~diagonal(){
        delete []A;
    }
};

void diagonal::Display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }    
}
void diagonal::set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}
int diagonal::get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    return 0;
}

int main(){
    diagonal d(4);

    d.set(1,1,5);
    d.set(2,2,6);
    d.set(3,3,7);
    d.set(4,4,8);

    d.Display();
}
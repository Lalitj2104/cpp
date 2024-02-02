#include<iostream>
using namespace std;
class diagonal{
    private:
    int *A;
    int n;
    public:
    diagonal(int n);
    void create();
    int get(int i,int j);
    void set(int i,int j,int x);
    void display();
    ~diagonal();
};
diagonal::diagonal(int n){
    this->n=n;
    A=new int[n];
}
diagonal::~diagonal(){
    delete []A;
}
void diagonal::create(){
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            if(i==j){
                A[i-1]=x;
            }
        }
    }
}
void diagonal::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<A[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
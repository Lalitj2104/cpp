#include<iostream>
using namespace std;
class diagonal{
    private:
    int n;
    int *A;
    public:
    diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void Display();
    ~diagonal();
};

void diagonal::Display(){
    
}
int main(){

}
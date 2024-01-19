#include<iostream>
using namespace std;

class lowerTriangularMatrix{
    int *A;
    int size;
    public:
    void lowertriangular(){
        size=2;
        A= new int[size];
    }
    void lowerTriangular(int size){
        this->size=size;
        A= new int[size];
    }
    void set();
    int get();
    void display();

};

void lowerTriangularMatrix::display(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(j<i){
                cout<<"0 ";
            }
            else{
                int x=(i*(i-1))/2+j-1;
                cout<<x<<" ";
            }
            cout<<endl;

        }
    }
}

void lowerTriangularMatrix::set(){
    
}
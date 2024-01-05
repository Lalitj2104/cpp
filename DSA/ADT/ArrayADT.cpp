#include <iostream>
using namespace std;

template<class T>
class Array{
    private:
    T *A;
    int size;
    int length;
    public:
    Array()
    {
        size=10;
        A=new T[10];
        length=0;

    }

    Array(int sz){
        size=sz;
         length=0;
        A=new T[size];
       
    }

    ~Array(){
        delete []A;
    }
    void Display();
    void Insert(int index,T x);
    T Delete(int index);
};

template<class T>
void Array<T>::Display(){
    int i;
    cout<<"Elements in array: "<<endl;
    for(i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

template<class T>
void Array<T>::Insert(int index,T x){
    int i;
    if(index>=0 && index<=length){
        for(i=index;i<=length;i++){
        A[i+1]=A[i];
        A[index]=x;
      }
      length++;
    }
}

template<class T>
T Array<T>::Delete(int index){
    T x=0;
    int i;
    if(index>=0 && index <length){
        x=A[index];
        for(i=index;i<length;i++){
            A[i]=A[i+1];   
        }
        length--;
        
    } 
    return x;
}


int main(){
    Array<char> arr(10);

    arr.Insert(0,'a');
    arr.Insert(1,'b');
    arr.Insert(2,'c');
    arr.Display();
    cout<<"Removed element is: "<<arr.Delete(0)<<endl;
    arr.Display();
}
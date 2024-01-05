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
    int Linear_Search(T key);
    int Binary_Search(T key);
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

template<class T>
int Array<T>::Linear_Search(T key){
        for(int i=0;i<length;i++){
            if (key==A[i]){ 
                swap(A[0],A[i]);        //move to front method for constant time 
                return i;
            }   
        }    
        return -1;
    }


template<class T>
int Array<T>::Binary_Search(T key){
    int s=0,e=length;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==A[mid]){
            return mid;

        }

        else if(key<A[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}

int main(){
    Array<int> arr(10);

    arr.Insert(0,100);
    arr.Insert(1,200);
    arr.Insert(2,300);
    arr.Display();
    // cout<<"Removed element is: "<<arr.Delete(0)<<endl;
    // cout<<arr.Linear_Search(300)<<endl;
    // cout<<arr.Binary_Search(400)<<endl;
    arr.Display();
}
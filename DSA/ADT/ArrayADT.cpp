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
    void get(int index);
    void Set(int index,T value);
    void max();
    void min();
    void sum();
    void avg();
    void reverse();
    void rightShift();
    void leftShift();
    void rightrotation();
    void leftrotation();
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


template<class T>
void Array<T>::get(int index){
    if(index>=length){
        cout<<"out of range"<<endl;
    }
    else{
        cout<<A[index]<<endl;
    }
}


template<class T>
void Array<T>::Set(int index,T value){
    if(index>=length){
        cout<<"out of range"<<endl;
    }
    else{
        A[index] =value;
    }
}

template<class T>
void Array<T>::max(){
    T max=A[0];
    for(int i=1;i<length;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Max element is: "<<max<<endl;
}

template<class T>
void Array<T>::min(){
    T min=A[0];
    for(int i=1;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<"Min element is: "<<min<<endl;
}

template<class T>
void Array<T>::sum(){
    T total=0;
    for(int i=0;i<length;i++){
        total += A[i];
    }

    cout<<"sum is: "<<total<<endl;
}

template<class T>
void Array<T>::avg(){
    T avg;
    T total=0;
    for(int i=0;i<length;i++){
        total += A[i];
    }
    avg=total/length;

    cout<<"Avg is: "<<avg<<endl;
}

template<class T>
void Array<T>:: reverse(){
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--){
        swap(A[i],A[j]);
    }
}


template<class T>
void Array<T>::leftShift(){
    for(int i=0;i<length;i++){
        A[i]=A[i+1];
    }
    A[length-1]=0;
}

template<class T>
void Array<T>::rightShift(){
    for(int i=length-1;i>=0;i--){
        A[i]=A[i-1];
    }
    A[0]=0;
}


template<class T>
void Array<T>::leftrotation(){
    T temp=A[0];
    for(int i=0;i<length;i++){
        A[i]=A[i+1];
    }
    A[length-1]=temp;
}

template<class T>
void Array<T>::rightrotation(){
    T temp=A[length-1];
    for(int i=length-1;i>=0;i--){
        A[i]=A[i-1];
    }
    A[0]=temp;
}


int main(){
    Array<int> arr(10);

    arr.Insert(0,100);
    arr.Insert(1,200);
    arr.Insert(2,300);
    arr.Display();


}
#include <iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int sum=arr[0];
    int remain=sumOfArray(arr+1,size-1);
    sum=arr[0]+remain;
    return sum;

        
   
    
    
}

void insertion(int arr[],int size){
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}

int main(){
    int arr[100],size;
    cout<<"Enter the size of array: ";
    cin>>size;
    insertion(arr,size);
    int result=sumOfArray(arr,size);
    cout<<"The sum of array is: "<<result;
    
}
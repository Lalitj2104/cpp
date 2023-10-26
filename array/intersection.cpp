#include <iostream>
using namespace std;
void intersection(int arr[],int arr1[],int size,int size1){
    cout<<"elements which are common: ";
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}

int main(){
    int num,arr[100],arr1[100],size,size1;
    cout<<"Enter number of test cases: ";
    cin>>num;
    cout<<"Enter size of arr,arr1: ";
    cin>>size>>size1;
    cout<<"Enter elements of array 1 : "<<endl; 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter elements of array 2 : "<<endl; 
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
     intersection(arr,arr1,size,size1);

}
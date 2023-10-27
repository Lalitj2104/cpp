#include <iostream>
using namespace std;
void pairSum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if (arr[i]+arr[j]==sum){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main(){
    int size,arr[100],sum;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum:";    
    cin>>sum;
    pairSum(arr,size,sum);
}
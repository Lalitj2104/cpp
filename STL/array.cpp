#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,4> arr={1,2,3,4};

    int size= arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }

    cout<<arr.empty()<<endl;
    cout<<"element at index 2: "<<arr.at(2)<<endl;
    cout<<"first element of array: "<<arr.front()<<endl;
    cout<<"last element of array: "<<arr.back()<<endl;
}
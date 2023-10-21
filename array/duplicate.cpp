#include <iostream>
using namespace std;
int duplicate (int arr[],int size){
    
}
int main(){

    int num, arr[100], size;
    cout << "Enter number of test cases: " << endl;
    cin >> num;
    cout << "Enter number of elements in the array: " << endl;
    cin >> size;
    cout << "Enter elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result=duplicate(arr,size);
    cout<<"Duplicate element in the given array is: "<<result<<endl;
}
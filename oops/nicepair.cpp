#include <iostream>
using namespace std;

void insertion(int arr[], int size)
{
    cout << "Enter the elements in array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main(){
    int arr[100],size;
    cout<<"enter the size of arrray: "<<endl;
    cin>>size;
    insertion(arr,size);

}
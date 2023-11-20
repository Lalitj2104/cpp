#include <iostream>
using namespace std;
void insertion(int arr[],int books){
    cout<<"Enter the pages in each book: "<<endl;

    for(int i=0;i<books;i++){
        cin>>arr[i];
    }
}

int bookAllocation(int arr[],int books,int students){
    int max,e;
    for(int i=0; i<books;i++){
        e+=arr[i];
    }
    int s=0;
    int mid=s+(e-s)/2;
    while(s<=e){
        
    }
}
int main(){

    int arr[100],books,students;
    cout<<"Enter number pf books: "<<endl;
    cin>>books;
    cout<<"Enter the number of students: "<<endl;
    cin>>students;
    insertion(arr,books);
}
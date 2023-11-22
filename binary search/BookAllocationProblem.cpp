#include <iostream>
using namespace std;
int isPossible(int arr[],int books,int students,int mid){
    int stdCount=1;
    int pageSum=0;

    for(int i=0;i<books;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            stdCount++;
            if(stdCount>students ||arr[i]>mid ){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}
void insertion(int arr[], int books)
{
    cout << "Enter the pages in each book: " << endl;

    for (int i = 0; i < books; i++)
    {
        cin >> arr[i];
    }
}

int bookAllocation(int arr[], int books, int students)
{
    int max, e;
    for (int i = 0; i < books; i++)
    {
        e += arr[i];
    }
    int s = 0;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if(isPossible(arr,books,students,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{

    int arr[100], books, students;
    cout << "Enter number of books: " << endl;
    cin >> books;
    cout << "Enter the number of students: " << endl;
    cin >> students;
    insertion(arr, books);
    int result=bookAllocation(arr,books,students);
    cout<<"the min division will be "<<result;
}
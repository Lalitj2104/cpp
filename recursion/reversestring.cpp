#include <iostream>
using namespace std;
void ReverseString(string &arr, int i, int j)
{

    
     if (i >j)
    {
        return;
    }
    
    swap(arr[i], arr[j]);
    i++;
    j--;
    
    ReverseString(arr , i, j );
}

int main()
{

    string arr;
    cout<<"Enter the string: "<<endl;
     cin >> arr;
    int j=arr.length()-1;
    ReverseString(arr,0, j);

    cout<<arr;
}
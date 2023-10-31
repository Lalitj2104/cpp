#include <iostream>
#include <limits.h>
using namespace std;

void largestRowWiseSum(int arr[][100], int row, int column)
{
    int large = INT_MIN;
    int index=-1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
        if (sum>large){
            large=sum;
            index=i;
        }
        
    }
    cout << "largest  row sum: " << large <<" of row "<< (index+1)<< endl;
}
int main()
{
    int row, column, arr[100][100], target;
    cout << "enter the elements u want to enter in the array: " << endl;
    cin >> row >> column;

    cout << "enter the elements in the array: ";
    // for inputing the values from the users
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    largestRowWiseSum(arr, row, column);
}
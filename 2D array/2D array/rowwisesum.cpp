#include <iostream>
using namespace std;

void rowWiseSum(int arr[][100], int row, int column)
{
    int start = 0;
    while (start < row)
    {
        for (int i = 0; i < row; i++)
        {
            int sum = 0;
            for (int j = 0; j < column; j++)
            {
                
                if (i == start)
                    sum += arr[i][j];
            }
            cout<<"sum of "<<start<<"th row = "<<sum<<endl;
            
            start++;
        }
    }
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

    rowWiseSum(arr, row, column);
}
#include <iostream>
using namespace std;

void rowWiseSum(int arr[][100], int row, int column)
{
    
        for (int i = 0; i < row; i++)
        {
            int sum = 0;
            for (int j = 0; j < column; j++)
            {
                    sum += arr[i][j];
            }
            cout<<"sum of "<<row<<"th row = "<<sum<<endl;
            
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
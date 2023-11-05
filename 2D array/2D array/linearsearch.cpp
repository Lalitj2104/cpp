#include <iostream>
using namespace std;

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

    // for getting the target whose index we have to find
    cout << "enter the element u want to find: " << endl;
    cin >> target;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "the element u want to find is at index: ";
                cout << i << " " << j;
            }
        }
        cout << endl;
    }
}
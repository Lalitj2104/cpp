#include <iostream>
using namespace std;

void spiralPrint()
{
}

int main()
{
    int row, column, arr[100][100];
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
}
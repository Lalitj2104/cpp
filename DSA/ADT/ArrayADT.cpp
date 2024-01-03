#include <iostream>
using namespace std;
// class arr
// {
// public:
//     int *A;
//     int size;
//     int length;

// public:
//     arr()
//     {
//         size = 10;
//         length = 0;
//         A = new int[size];
//     }
//     arr(int z)
//     {
//         size = z;
//         length = 0;
//         A = new int[z];
//     }

//     ~arr
//     {
//         delete[] A;
//     }
// };

// void display(arr a)
// {
//     for (int i = 0; i < arr.size; i++)
//     {
//         cout << a.A[i];
//     }
// }

int main()
{
    arr a;
    int n;
    cout << "Enter size of an array: " << endl;
    cin >> &a.size;
    a.A = new int[arr.size];
    a.length = 0;

    cout << "Enter elements in array: " << endl;

    for (int i = 0; i < a.size; i++)
    {
        cin >> &a.A[i];
    }
    a.length = n;

    display(a);
}
#include <iostream>
using namespace std;
void multipleMissing(int arr[])
{
    int diff = arr[0] - 0;
    for (int i = 0; i < 10; i++)
    {
        if ((arr[i] - i) != diff)
        {
            while (diff < (arr[i] - i))
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }
}

int main()
{

    int arr[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    multipleMissing(arr);
}
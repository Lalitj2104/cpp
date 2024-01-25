

#include <iostream>
using namespace std;
class upperMatrix
{
private:
    int *A;
    int size;
    int siz;

public:
    upperMatrix()
    {
        int size = 2;
        size = (2 * (2 + 1)) / 2;
        A = new int[size];
    }
    upperMatrix(int q)
    {
        siz=q;
        size = (q * (q + 1)) / 2;
        A = new int[size];
    }
    void Display();
    void set(int i, int j, int s);
    int get(int i, int j);
    int getDimension()
    {
        return size;
    }
    ~upperMatrix()
    {
        delete[] A;
    }
};


void upperMatrix::Display()
{
    for (int i = 1; i <= siz; i++)
    {
        for (int j = 1; j <= siz; j++)
        {
            if (j >= i)
            {
                int x = ((i-1)*size-((i-2)*i-1)/2)+ j - i;
                cout << A[x] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void upperMatrix::set(int i, int j, int s)
{
    if (i <= j)
    {
        int x = ((i-1)*size-((i-2)*i-1)/2)+ j - i;
        A[x] = s;
    }
}
int upperMatrix::get(int i, int j)
{
    if (i <= j)
        return A[((i-1)*size-((i-2)*i-1)/2)+ j - i];
    return 0;
}

int main()
{
    int d;
    cout << "Enter the dimensions: " << endl;
    cin >> d;
    upperMatrix lm(d);

    int x;
    cout << "enter all the elements: " << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.set(i, j, x);
        }
    }
    lm.Display();
}
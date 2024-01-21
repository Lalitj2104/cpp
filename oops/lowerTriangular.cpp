#include <iostream>
using namespace std;

class lowerTriangularMatrix
{
private:
    int *A;
    int size;

public:
    lowerTriangularMatrix()
    {
        size = 2;
        A = new int[size * (size + 1) / 2];
    }
    lowerTriangularMatrix(int size)
    {
        this->size = size;
        A = new int[size * (size + 1) / 2];
    }
    void set(int i, int j, int s);
    int get(int i, int j);
    void display();
    ~lowerTriangularMatrix()
    {
        delete[] A;
    }
    int getDimension(){
        return size;
    }
};

void lowerTriangularMatrix::display()
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (i >= j)
            {
                int x = (i * (i - 1)) / 2 + j - 1;
                cout << A[x] << " ";
               
            }
            else
            {
                 cout << "0 ";
            }
            cout << endl;
        }
    }
}

void lowerTriangularMatrix::set(int i, int j, int s)
{
    if (i >= j)
    {
        int x=i * (i - 1) / 2 + j - 1;
        A[x] = s;
    }
}
int lowerTriangularMatrix::get(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    return 0;
}

int main()
{
    int d;
    cout << "Enter the dimensions: " << endl;
    cin >> d;
    lowerTriangularMatrix lm(d);

    int x;
    cout << "enter all the elements: " << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j<= d; j++)
        {
            cin >> x;
            lm.set(i, j, x);
        }
    }
    lm.display();
}
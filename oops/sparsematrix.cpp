#include <iostream>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};

class sparse
{
private:
    int m;
    int n;
    int num;
    Element *ele;

public:
    sparse(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[this->num];
    }
    ~sparse()
    {
        delete[] ele;
    }
    sparse operator+(sparse &s);
    friend istream &operator>>(istream &is, sparse &s);
    friend ostream &operator<<(ostream &os, sparse &s);
};

sparse sparse::operator+(sparse &s)
{
    int i, j, k;
    if (m != s.m || n != s.n)
    {
        return s;
    }
    sparse *sum = new sparse(m, n, num + s.num);
    i = j = k = 0;
    while (i < num && j < s.num)
    {
        if (ele[i].i < s.ele[j].i)
        {
            sum->ele[k++] = ele[i++];
        }
        else if (ele[i].i > s.ele[j].i)
        {
            sum->ele[k++] = ele[j++];
        }
        else
        {
            if (ele[i].j < s.ele[j].j)
            {
                sum->ele[k++] = ele[i++];
            }
            else if (ele[i].j > s.ele[j].j)
            {
                sum->ele[k++] = s.ele[j++];
            }
            else
            {
                sum->ele[k] = ele[i];
                sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }
    }
    for(;i<num;i++) {
        sum->ele[k++]=ele[i];
    }
    for(;j<s.num;j++){
        sum->ele[k++]=s.ele[j];
    }
    return *sum;
}
istream &operator>>(istream &is, sparse &s)
{
    cout << "Enter non-zero elements: ";
    for (int i = 0; i < s.num; i++)
    {
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    }
    return is;
}

ostream &operator<<(ostream &os, sparse &s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (s.ele[k].i == i && s.ele[k].j == j)
            {
                cout << s.ele[k++].x << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return os;
}

int main()
{
    sparse s1(5, 5, 5);
    sparse s2(5, 5, 5);

    cin >> s1;
    cin >> s2;
    sparse sum = s1 + s2;
    cout << s1 << endl;
    ;
    cout << s2;
    cout << endl
         << sum;
}
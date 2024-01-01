#include <iostream>
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return (1);
    }
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

double i(int x,int n){
    static int  s=1;
    if(n==0){
        return (1);
    }
    s=1+x/n*s;
    return (x,n-1);
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<e(a,b);
}
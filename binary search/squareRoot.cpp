#include <iostream>
using namespace std;
long long int squareRoot(int n)
{
    int s = 0;
    int e = n ;
    int mid = s + (e - s) / 2;
    
    long long int ans = -1;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if ((sq) == n)
        {
            return mid;
        }
        else if ((sq) < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number whose square root u want to find:";
    cin >> num;
    int result = squareRoot(num);
    cout << result;
}
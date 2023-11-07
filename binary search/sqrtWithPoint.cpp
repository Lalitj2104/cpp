#include<iostream>
using namespace std;
long long int sqRt(int n)
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

double morePrecision(int n,int precision,int result){
    double end=1;
    double start=result;
    for(int i=0;i<precision;i++){
        end/=10;
        for(double j =start;(j*j)<n;j=j+end){
            start=j;
        }
    }
    return start;

}

int main()
{
    int num;
    cout << "Enter the number whose square root u want to find:";
    cin >> num;
    int  result = sqRt(num);
    int precision;
    cout<<"Enter the number of precision: "<<endl;
    cin>>precision;

    double result1=morePrecision(num,precision,result);
    cout<<"precised value of the sqrt= "<<result1;
}
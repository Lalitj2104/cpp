#include <iostream>
#include <math.h>
using namespace std;

int Power(int num, int power)
{

    if (power == 0)
    {
        return 1;
    }
    if (power == 1)
    {
        return num;
    }
    int result = pow(num, power / 2);

    if (num % 2 == 0)
    {
        return result * result;
    }
    else
    {
        return num * result * result;
    }
}

int main()
{
    int num, power;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter the power: " << endl;
    cin >> power;

    int result = Power(num, power);
    cout << "result is:  " << result;
}

// int   Power(int &num,int power){
//     int result=num;
//     if(power==0){
//         return 1 ;
//     }
//     if(power==1){
//         return result;
//     }
//     if(power>1){
//         result=num*num;
//     }

//     Power(num,power-1);
//     cout<<result;

// }
#include <iostream>
using namespace std;
void digitInWord(int num, string arr[10])
{
    if (num == 0)
    {
        return ;
    }
    int digit = num % 10;
     num =num / 10;
    digitInWord(num,arr);
    cout<<arr[digit]<<" ";


}

int main()
{
    int digit;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "enter the digit u want to print: ";
    cin >> digit;
    digitInWord(digit, arr);
    cout<<endl;
   // cout << "digit " << digit << " in word is: " << result;
}
// #include <iostream>
// using namespace std;
// int main()
// {

//     // int arr[8] = {-1,5,2,3,-6,8,1,0};
//     int arr[2] ={1,2};
//     int n = (sizeof(arr) / 4);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i + 1)
//         {
//             if (arr[i] >= 0 )
//             {
//                 int index = arr[i];
//                 int temp = arr[index-1];
//                 arr[index-1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
    
    
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i+1 )
//         {
//             cout << i+1 ;
//             break;
//         }
       
//     }
// }





#include <iostream>
using namespace std;

int main() {
    // int arr[8] = {-1,5,2,3,-6,8,1,0};
    int arr[2] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(arr[i], arr[arr[i] - 1]);
            i--;
        }
    }
    int flag =0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<< n+1;

    
}

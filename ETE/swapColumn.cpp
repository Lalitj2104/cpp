# include <iostream>
using namespace std;

int main(){
    int r,c,i,j;
    cin >> r>> c;
    int arr[r][c];
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    
    for (i=0;i<r;i++){
        for (j=c-1;j>=0;j--){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
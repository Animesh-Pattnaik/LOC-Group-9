#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout << "Enter elements for array \n";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
              cin >> arr[i][j];
        }
    }
    cout << "Transpose of the array";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
              cout << arr[j][i];
        }
    }
    return 0;
}
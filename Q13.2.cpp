#include <iostream>
using namespace std;
int main(){
    int arr1[3][3] , arr2[3][3];
    cout << "Enter elements for array 1 \n";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for array 2 \n";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
              cin >> arr2[i][j];
        }
    }

    int arr[3][3];
    for(int i = 0;i<5;i++){
        for(int j = 0;j<3;j++){
           arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Summation of both the array\n";
    for(int i = 0;i<3;i++){
         for(int j = 0;j<3;j++){
             cout << arr[i][j] << "\t";
         }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {11,32,10,23,43,21,9,34};
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7 - i ; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array";
    for(int i = 0 ; i<8 ; i++){
        cout << arr[i] << "\t";
    }
    cout << "\nSecond Smallest Element\n" << arr[1];
}
#include <iostream>
using namespace std;
int main(){
    int n1;
    int arr1[n1],arr2[n1];
    cout << "Enter the size of array 1";
    cin >> n1;
     cout << "\nArray 1 \n";
    for(int i = 0 ; i<n1 ; i++){
       cin >> arr1[i];
       cout << arr1[i];
    }
    for(int i = 0 ; i<n1 ; i++){
        arr2[i] = arr1[i];
    }
     cout << "\nArray 2 \n"; 
    for(int i = 0 ; i<n1 ; i++){
       cout << arr2[i];
    }
}
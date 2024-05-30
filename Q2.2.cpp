#include <iostream>
using namespace std;
int main(){
    int n1,n2,n;
    cout << "Enter the size of array 1";
    cin >> n1;
    int arr1[n1];
    for(int i = 0 ; i<n1 ; i++){
        cin >> arr1[n1];
    }

    cout << "Enter the size of array 2";
    cin >> n2;
    int arr2[n2];
    for(int i = 0 ; i<n2 ; i++){
        cin >> arr2[n2];
    }

    n = n1+n2;
    int arr[n];
    for(int i = 0 ; i <n1; i++){
        arr[i] = arr1[i];
    }
    for( int i=0 ; i<n2 ; i++){
        arr[n1+i] = arr2[i];
    }

    cout << "In reverse order";
    for(int i = n-1 ; i>=0 ; i--){
        cout << arr[i];
    }
    return 0;
}
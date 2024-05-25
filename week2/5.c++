#include <iostream>
using namespace std;

int main() {
    
    int n,i;
    cout<<"Enter the size of the source array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of the source array: ";
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[n];
    
    
    // Copying elements from sourceArray to destinationArray
    for (int i = 0; i < n; ++i) {
        arr2[i] = arr1[i];
    }

    // Printing the elements of destinationArray to verify the copy
    cout << "Elements of the destination array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr2[i] << " ";
    }

    return 0;
}

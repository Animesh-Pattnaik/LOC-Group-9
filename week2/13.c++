#include <iostream>
using namespace std;

int main() {
    
    int array1[3][3];
    int array2[3][3];
    int sumArray[3][3];

    
    cout << "Enter elements for the first 3x3 array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> array1[i][j];
        }
    }

    
    cout << "Enter elements for the second 3x3 array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            
            cin >> array2[i][j];
        }
    }

    // Compute the sum of the two arrays
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the sum array
    cout << "Sum of the two 3x3 arrays:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sumArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

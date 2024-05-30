#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int maxocc = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxocc = arr[i];
        }
    }
    cout << "The max occurring integer is: " << maxocc << endl;
}
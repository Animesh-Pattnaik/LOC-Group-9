#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int num);
int main() {
    int n,i,num;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Enter the number to count in the array: ";
    cin >> num;

     int count = countOccurrences(arr, n, num);
    cout << "The number " << num << " occurs " << count << " times in the array." << endl;
     return 0;
}
// Function to count the occurrences of a number in an array
int countOccurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}
   


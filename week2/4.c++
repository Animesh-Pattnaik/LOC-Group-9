#include <iostream>
using namespace std;
int main() {
    int count = 1; 

    // Outer loop for the rows
    for (int i = 1; i <= 5; ++i) {
        // Inner loop for the columns in each row
        for (int j = 1; j <= i; ++j) {
            cout << count << " ";
            ++count;  
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

#include <iostream>
using namespace std;
 int main() {
    int marks[5];
    int total = 0;
    float avg , percentage;
    cout << "Enetr the marks of each subject";
    for(int i = 0;i<5;i++){
        cin >> marks[i];
        total += marks[i];
    }

    avg = total/5;
    percentage = (total/500)*100;

    cout << "Total = " << total;
    cout << "Average = " << avg;
    cout << "Percentage = " << percentage;

    return 0;
 }
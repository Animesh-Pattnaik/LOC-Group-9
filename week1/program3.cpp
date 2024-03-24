// A program to print the sum of digits of a number
#include <iostream>
using namespace std;
int main() {
   long long int num, sum = 0, digit;

     cout << "Enter a number: ";
    cin >> num;

     do {
        digit = num % 10; 
        sum += digit;        
        num /= 10;        
    } while (num != 0);

   
    cout << "The sum of digits is: " << sum <<endl;

    return 0;
}

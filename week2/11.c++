#include <iostream>
using namespace std;

void isArmstrong(int number ){

    int n,digit,sum=0;

     n=number;
    while (number != 0) {
        
        digit = number % 10;
        
        sum += digit * digit * digit;
        
       
        number /= 10;
    }
   

    if (sum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    

    
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    isArmstrong(number);
   

    return 0;
}



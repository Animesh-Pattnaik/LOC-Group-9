#include <iostream>
 using namespace std;
 int main() {
     int num1, num2;
     char operation;

     cout << "Enter num1";
     cin >> num1 ;

     cout << "Enter num2";
     cin >> num2 ;

     cout << "Enter operation";
     cin >> operation ;

     switch(operation){
        case '+':
        cout << "Result :" << num1 + num2 ;
        break;
        case '-':
        cout << "Result :" << num1 - num2 ;
        break;
        case '*':
        cout << "Result :" << num1 * num2 ;
        break;
        case '/':
        if(num2 != 0){
        cout << "Result :" << num1 / num2 ;
        }else {
            cout << "Divison is not possible";
        }
        break;
        case '%':
        cout << "Result :" << num1 % num2 ;
        break;
        default:
        cout << "Invalid Operation";
     }

 }
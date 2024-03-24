// Arithmatic operations by using switch case statement
#include<iostream>
using namespace std;
int main() {

   double num1,num2,result;
   char c;
   
   cout<<"Enter the first number:"<<endl;
   cin>>num1;
   cout<<"Enter the second number:"<<endl;
   cin>>num2;
   cout<< "Enter opertor: +,-,*,/" << endl;
    cin>>c;
   switch(c){
    case '+' :
    result = num1+num2;
    cout << "The sum is: " << result<< endl;
    break;
    case '-':
    result= num1-num2;
    cout << "The subtraction is: " << result<< endl;
     break;
    case '*':
    result = num1*num2;
    cout << "The multiplication  is: " << result<< endl;
     break;
    case '/':
    result= (float)num1/num2;
    cout << "The division is: " << result<< endl;
     break;
   }         

return 0;
}
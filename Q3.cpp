#include <iostream>
 using namespace std;
int main(){
    int num , rem , sum = 0;
     cout << "Enter Number";
     cin >> num ;
    do{
      rem = num % 10;
       sum += rem;
       num = num / 10;
     }while (rem != 0);
     cout << sum ;
    
 }
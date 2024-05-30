#include <iostream>
#include <string.h>
using namespace std;
int main(){
   char str[50];
   int vowels = 0;
   cout << "Enter a string";
   gets(str);
   for(int i = 0;i!='\0';i++){
    if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
        vowels++;
    }
   }
   cout << "Number of vowels" << vowels;
   return 0;
}
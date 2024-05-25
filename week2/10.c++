#include <iostream>
#include <string>
using namespace std;

int main() {

    int alphabets = 0, digits = 0, specialCharacters = 0;
     char str[10000];

     cout<<"Enter your string";
    gets(str);

     for (int i = 0; str[i] != '\0'; i++) {

        if (isalpha(str[i])) {
           
            alphabets++;

             } else if (isdigit(str[i])) {
            
            digits++;

             } else if (str[i] != ' ') {
            
            specialCharacters++;
        }
    }
     cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specialCharacters << endl;

    return 0;
}

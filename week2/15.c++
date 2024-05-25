#include <iostream>
#include<string>
using namespace std;

int main(){
    char str[10000];

    cout<<"Enter your string:";
    gets(str);


     int i,j=0;
    char str2[10000];
    for (int i = 0; str[i] != '\0'; i++) {

         if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >='a' && str[i] <= 'z'))
        { 
            str2[j] = str[i];
            j++;
        }

    }
     cout<<"The string with only aphabets:"<<endl;
    for(j=0;str[j] !='\0';j++){

          cout<<str2[j];
    }

}   
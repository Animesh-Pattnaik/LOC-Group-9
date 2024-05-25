#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[10000];
    int i,count=0,p=0;
    cout<<"Enter your string: ";
    gets(str);

    for(i=0;str[i]!='\0';i++){
        switch(str[i]){
            case'A':
            case'E':
            case'I':
            case'O':
            case'U':
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':

            count++;
            break;
            default:
            if(str[i]!= ' ')
                p++;


        }
    }
    cout<<"The vowels in the string is:"<<count<<endl;
    cout<<"The no of consonants in the string is :"<<p;
}
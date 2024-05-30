#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str[50];
    int c = 0, n = 0, s = 0;
    cout << "Enter a string ";
    gets(str);
    for (int i = 0; str[i]!='\0'; ++i)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                ++c;
             else if (str[i] >= '0' && str[i] <= '9')
                      ++n;
                  else
                      ++s;
    }
    cout << "Number of consonants : " << c;
    cout << "\nNumber of numbers :" << n;
    cout << "\nNumber of special characters : " << s;
    return 0;
}
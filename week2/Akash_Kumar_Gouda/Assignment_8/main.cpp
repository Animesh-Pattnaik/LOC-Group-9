#include <iostream>

int main()
{
    char s[] = "lorem ipsum";

    const int string_length = 11;

    int consonants = 0, vowels = 0;
    for (int i = 0; i < string_length; i++)
    {
        switch (s[i])
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;


        default:
            consonants++;
         
        }
    }

    std::cout << "Number of vowels: " << vowels
        << "\nNumber of consonants: " << consonants << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Enter the string \n";
    std::getline(std::cin >> std::ws, s);

    int alphabets = 0, digits = 0, special = 0;

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) 
        {
            alphabets++;
        }

        else if (s[i] >= '0' && s[i] <= '9') 
        {
            digits++;
        }

        else 
        {
            special++;
        }
    }

    std::cout << "\nNumber of Alphabets: " << alphabets
        << "\nNumber of digits: " << digits
        << "\nNumber of Special characters: " << special << std::endl;
    return 0;
}
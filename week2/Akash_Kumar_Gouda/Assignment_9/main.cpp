#include <iostream>

int main()
{
    int h = 5;

    for (int i = h; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

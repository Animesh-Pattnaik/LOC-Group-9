#include <iostream>

int main()
{
    int n = 4;
    
    for (int i = 0, j = 1; i < n; i++)
    {
        for (int k = 0; k <= i; k++, j++)
        {
            std::cout << j << "  ";
        }
        std::cout << "\n";
    }

    return 0;
}

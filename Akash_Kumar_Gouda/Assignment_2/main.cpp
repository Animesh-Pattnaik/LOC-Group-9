#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num == 0)
        std::cout << "Number is 0!\n";

    else if (num > 0)
        std::cout << num << " is positive!\n";

    else
        std::cout << num << " is negetive!\n";

    return 0;
}

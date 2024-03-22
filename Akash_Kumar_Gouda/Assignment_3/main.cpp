#include <iostream>
#include <cmath>

void sum_of_digits(int num);

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // if negetive number is entered, it will be converted to positive by abs()
    num = abs(num);

    sum_of_digits(num);
}

void sum_of_digits(int num)
{
    int sum = 0;

    do
    {
        sum = sum + (num % 10);
        num = (num / 10);
    } while (num > 0);

    std::cout << "sum of digits: " << sum << "\n";
}
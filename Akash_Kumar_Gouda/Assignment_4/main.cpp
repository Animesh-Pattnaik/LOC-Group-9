#include <iostream>

float operations(float a, float b);

int main()
{
    float num1, num2;
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    std::cout << operations(num1, num2) << std::endl;
}

float operations(float a, float b)
{
    // operator variable where user's choice will be stored
    char op;

    std::cout << "Available operations \n'+' '-' '/' '*' '%'\n\n";
    std::cout << "Enter the operation you want to perform: ";
    std::cin >> op;

    switch(op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '/':
        return a / b;
    case '*':
        return a * b;
    case '%':
        // % operator only works with integer values
        return (int)a % (int)b;
    default:
        // in case of invalid choice no value is returned and program ends
        std::cout << "Enter a valid choice!!";
    }
}
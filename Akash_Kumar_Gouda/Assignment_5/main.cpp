#include <iostream>


int main()
{
    float r;
    const float pi = 3.141f;
    std::cout << "Enter the radius of circle: ";
    std::cin >> r;

    std::cout << "Diameter: " << 2 * r << 
        "\nCircumference: " << 2 * pi * r << 
        "\nArea: " << pi * r * r;
}

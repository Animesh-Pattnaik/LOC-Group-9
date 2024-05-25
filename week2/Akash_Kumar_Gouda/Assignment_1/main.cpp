#include <iostream>

void count(int arr[], int array_size);

int main()
{
    const int array_size = 10;
    
    int arr[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cout << "Enter " << i + 1 << " element\n";
        std::cin >> arr[i];
    }

    count(arr, array_size);

    return 0;
}

void count(int arr[], int array_size)
{
    int x;
    std::cout << "\nEnter the number to be searched: ";
    std::cin >> x;

    int count = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (x == arr[i])
            count++;
    }

    std::cout << "\nNumber of occurances of " << x << " is " << count;
}
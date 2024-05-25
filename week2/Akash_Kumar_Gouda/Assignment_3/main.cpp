#include <iostream>

void sort(int arr[], int s);
void printArr(int arr[], int s);

int main()
{
    const int arr_size = 7;
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    
    sort(arr, arr_size);
    printArr(arr, arr_size);

    return 0;
}


// Bubble sort
void sort(int arr[], int s)
{
    int c; // temporary variable used for swapping

    for (int i = 0; i < (s - 1); i++)
    {
        for (int j = 0; j < (s - 2); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
}

// function for printing array
void printArr(int arr[], int s)
{
    std::cout << "sorted array\n";
    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
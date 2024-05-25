#include <iostream>

void copy(int arr[], int arr2[], int s);
void printArr(int arr[], int s);

int main()
{
    const int arr_size = 7;
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };

    // creating array2 for copying
    int arr2[arr_size];

    copy(arr, arr2, arr_size);
    printArr(arr2, arr_size);

    return 0;
}


// copying arr
void copy(int arr[], int arr2[], int s)
{
    for (int i = 0; i < s; i++)
    {
        arr2[i] = arr[i];
    }
}

// function for printing array
void printArr(int arr[], int s)
{
    std::cout << "copy of arr1\n";
    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
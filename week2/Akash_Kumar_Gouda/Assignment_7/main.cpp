#include <iostream> 

void negetiveNumbersShift(int arr[], int arr_size);
void printArr(int arr[], int s);

int main()
{
    int arr_size = 7;
    int arr[] = { -45, 50, -3, 45, -51, 3, 3 };

    negetiveNumbersShift(arr, arr_size);
    printArr(arr, arr_size);

    return 0;
}



// shifting negetive numbers to left
void negetiveNumbersShift(int arr[], int arr_size)
{
    int c;
    for (int i = 0, j = -1; i < arr_size; i++)
    {
        if (arr[i] < 0)
        {
            j++;
            c = arr[j];
            arr[j] = arr[i];
            arr[i] = c;

        }
    }
}

// function for printing array
void printArr(int arr[], int s)
{
    std::cout << "copy of arr1\n";
    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

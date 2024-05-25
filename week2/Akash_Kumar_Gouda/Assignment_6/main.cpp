#include <iostream> 

int maxOccuringInteger(int* arr, int s);

int main()
{
    int arr_size = 7;
    int arr[] = { 45, 50, 3, 45, 51, 3, 3};

    std::cout << "Integer with maximum occurances: " << maxOccuringInteger(arr, arr_size) << std::endl;

    return 0;
}




int maxOccuringInteger(int* arr, int s)
{
    int max_count = 0;
    int interger_with_max_count = 0;
    int count;


    //finding integer with maximum repetitions
    for (int i = 0; i < s; i++)
    {
        count = 0;
        for (int j = 0; j < s; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            interger_with_max_count = arr[i];
        }
    }

    return interger_with_max_count;

}
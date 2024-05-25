#include <iostream>

int main()
{
	const int arr1_size = 5, arr2_size = 5;
	int a[arr1_size] = { 1, 2, 3, 4, 5 };
	int b[arr2_size] = { 6, 7, 8, 9, 10 };

	// making the new array
	const int arr3_size = arr1_size + arr2_size;
	int c[arr3_size];

	// copying array 1 elements
	for (int i = 0; i < arr1_size; i++) {
		c[i] = a[i];
	}

	// copying array 2 elements
	for (int i = 0, j = arr1_size;
		(i < arr2_size) && (j < arr3_size);
		i++, j++)
	{
		c[j] = b[i];
	}

	// printing the merged array in reverse

	for (int i = arr3_size - 1;
		i >= 0;
		i--) 
	{
		std::cout << c[i] << std::endl;
	}

}

#include <iostream>
using namespace std;
int frequency(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
   
    for(i = 0; i< n; i++) 
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++; 

                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

int main()
{
    int n; 
    
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];      
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)  
    {
        cin>>arr[i];
    } 
    int maxElement = frequency(arr, n);    
    cout<<"The maximum repeating element is:"<<maxElement;
    return 0;
}
#include<iostream>
using namespace std;

int secSmallest(int arr[], int n)
{
   
   int smallest = arr[0];

   // we find the smallest element here
   for (int i=0; i < n; i++){
     if(arr[i] < smallest)
       smallest = arr[i];
   }

    //assigning a temporary value
   int sec_smallest =arr[1];

   
   for (int i=0; i < n; i++){
      if(arr[i] != smallest && arr[i] < sec_smallest)
        sec_smallest = arr[i];
   }

   return sec_smallest;

}
int main()
{
    int n,i;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Second smallest element is:"<<secSmallest(arr, n);
}
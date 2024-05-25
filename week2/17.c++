 
#include <iostream> 
using namespace std; 


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

    int maxcount = 0; 
	int max_freq; 
	for (int i = 0; i < n; i++) { 
		int count = 0; 
		for (int j = 0; j < n; j++) { 
			if (arr[i] == arr[j]) 
				count++; 
		} 

		if (count > maxcount) { 
			maxcount = count; 
			max_freq = arr[i]; 
		} 
	} 

	cout<<"The element having maximum frequency is"<<' '<<max_freq<<"with frequency"<<' '<<maxcount;
	return 0; 
} 



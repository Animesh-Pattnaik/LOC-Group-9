#include<iostream>
using namespace std;

int sort(int arr[] ,int size );


int main(){
  int size,i;   
cout << "Enter the size of the array: ";
cin >> size;
 int arr[size];
cout << "Enter the elements of the array: ";

for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
sort(arr, size);
cout << "Sorted array: ";
for(i=0;i<size;i++){
    cout<<arr[i];
}

return 0;
}

int sort(int arr[],int size ){
    int temp,i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return 0;
}
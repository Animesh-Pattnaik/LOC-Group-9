#include <iostream>
using namespace std;
void negativeNumbers(int arr[7],int size){
    int j = 0;
    for(int i = 0;i<7;i++){
        if(arr[i]<0){
            if(i!=j){
              swap(arr[i],arr[j]);
              j++;
            }
        }
    }
    for(int i = 0 ; i<7 ; i++){
       cout << arr[i];
       cout << "\t";
    }
}

int main(){
    int arr[7] = {-1,-5,-8,5,-6,4,-3};
    int size = sizeof(arr) / sizeof(arr[0]);

    negativeNumbers(arr,size);
}
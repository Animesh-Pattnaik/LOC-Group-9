#include <iostream>
using namespace std;
int countTimes (int arr[],int num){
    int count = 0;
    for(int i = 0;i<11;i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
 }

 
 int main(){
     int arr[11] = {1,2,4,2,5,3,6,3,2,7,4};
    int num;
    cout << "Enter the number";
    cin >> num;
    int count = countTimes(arr,num);
    cout << count;
 }

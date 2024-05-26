#include <iostream>
using namespace std;
int armstrongNumber(int num){
    int rem , sum = 0;
    int newNum = num;
        while(newNum != 0){
        rem = newNum % 10;
        sum += rem*rem*rem;
        newNum = newNum / 10;
    }
     if(sum == num){
        cout << "It is a Armstrong Number";
    }else {
        cout << "It is not a Armstrong Number";
    }
    return 0;
}
int main(){
    int num ;
    cout << "Enter the number";
    cin >> num;
    armstrongNumber(num);
    return 0;
}
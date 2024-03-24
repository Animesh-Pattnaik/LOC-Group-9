// A program to check if a number is positive,negative or zero
#include<iostream>
using namespace std;
int main(){
    long long int num;
    cout<<"Enter your number:";

    cin>>num;

    if(num>0)
    cout<<"The number is positive";
    if(num<0)
    cout<<"The number is negative";
    if (num==0)
    cout<<"The number is zero"<<endl;
    return 0;
}
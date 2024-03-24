// Program to check if a triangle is valid by taking angles as input
#include<iostream>

using namespace std;
int main()
{
    float angle[3];
    int i,sum=0;
    for(i=0;i<3;i++){
        cout<<"Enter angle :";
        cin>>angle[i];

        sum+=angle[i];
    }
    if(sum==180)
    cout<<"The triangle is valid";
    else
    cout<<"The triangle is not valid";
    
    return 0;
}
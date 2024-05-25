// Checking if a triangle is equilateral,isosceles or scalene
#include<iostream>
using namespace std;
int main()
{

    float sides[3],s1,s2,s3;

    cout<<"Enter side1: "<<endl;
    cin>>s1;
    cout<<"Enter side2:"<<endl;
    cin>>s2;
    cout<<"Enter the side3:"<<endl;
    cin>>s3;
    if((s1+s2>s3)&&(s2+s3>s1)&&(s3+s1>s2)){
        
        if((s1==s2)&&(s2==s3)&&(s3==s1))
        cout<<"The triangle is equilateral";
        else if((s1==s2)||(s2==s3)||(s3==s1))
        cout<<"The triangle is isosceles";
        else if ((s1!=s2!=s3))
        cout<<"The triangle is scalene";
        
    }
    else
    cout<<"The triangle is not valid";

    return 0;
}
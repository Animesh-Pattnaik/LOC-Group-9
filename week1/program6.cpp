// A program for finding the leap year
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;

    if ((year%400==0)||((year%100!=0)&&(year%4==0)))
    cout <<"The entered year is a leap year"<<endl;
    else
    cout <<"The entered year is not a leap year";

    return 0;

}
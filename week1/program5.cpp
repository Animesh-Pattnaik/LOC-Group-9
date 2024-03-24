// Finding diameter,circumference and area of a circle
#include<iostream>
#include<cmath>
using namespace std ;
# define pi 3.141
int main(){
    double rad,dia,circum,area;
    cout<<"Enter the radius of the circle:"<< endl;
    cin>>rad;
    cout<<"The diameter of circle is:"<< 2*rad<<endl;
    cout<<"The circumference of the circle is:"<<2*pi*rad<<endl;
    cout<<"The area of the circle is :"<< pi*pow(rad,2);

return 0;
}
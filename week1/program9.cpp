// coverting cm to meter and km
#include<iostream>
using namespace std;
int main()
{
    float input;
    cout<<"Enter length in cm:";
    cin>>input;
    cout<<"The entered length in metre is :"<<input*0.01<<"metres"<<endl;
    
    cout<<"The entered length in kilometres is:"<<input*0.00001<<"km";

return 0;
}
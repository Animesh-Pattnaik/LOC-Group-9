#include <iostream>
using namespace std;
 int main(){
    float angle1,angle2,angle3;
    cout << "Enter the angles of triangle";
    cout << "Angle 1";
    cin >> angle1;
    cout << "Angle 2";
    cin >> angle2;
    cout << "Angle 3";
    cin >> angle3;

    if(angle1+angle2+angle3 == 180.0f){
        cout << "It is a valid triangle";
    }else{
        cout << "It is not a valid triangle";
    }
      return 0;
 }
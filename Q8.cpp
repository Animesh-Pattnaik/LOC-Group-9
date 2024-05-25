#include <iostream>
using namespace std;
 int main(){
    float cm , m , km;
    cout << "Enter the length in centimeters";
    cin >> cm;

    m = cm/100.0;
    km = cm/100000.0;

    cout << "Meters" << m;
    cout << "Kilometers" << km;
 }
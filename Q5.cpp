 #include <iostream>
 #include <cmath> 
 using namespace std;
 int main() {
     double radius, dia;
     double circum , area;
     cout << "Enter Radius";
     cin >> radius ;
    
    dia = 2 * radius;
    circum =  2 * M_PI * radius;
    area = M_PI * radius *radius;
    cout << "diameter :" << dia;
    cout << "circumference :" << circum;
    cout << "area :" << area;
 }


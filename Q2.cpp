 #include <iostream>
using namespace std;
 int main(){
    int a;
     cout << "Enter Number";
     cin >> a ;
     if(a > 0){
        cout << "It's an positive number";
    }else if(a < 0){
         cout << "It's a negative number";
    }else {
         cout << "It's Zero";
     }
     return 0;
 }

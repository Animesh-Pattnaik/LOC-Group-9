#include <iostream>
using namespace std;
 int main(){
    float s1,s2,s3;
    cout << "Enter the Sides of triangle";
    cout << "Side 1";
    cin >> s1;
    cout << "Side 2";
    cin >> s2;
    cout << "Side 3";
    cin >> s3;

    if(s1==s2 && s2== s3){
        cout << "It is a equilateral triangle";
    }else if(s1==s2 || s2==s3 || s3==s1){
        cout << "It is a isosceles triangle";
    }else{
        cout << "The triangle is scalene.";
    }
    return 0;
 }
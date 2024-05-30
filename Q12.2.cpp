#include <iostream>
#include <string>

std::string binary(int num){
    std::string binary = 0;
    if(num == 0){
        return 0;
    }
    while(num>0){
         binary = std::to_string(num%2) + binary;
         num = num/2;
    }
    return binary;
}
int main(){
     int num ;
    std::cout << "Enter the number";
    std::cin >> num;
    int newNum = num;
    std::string binaryNumber = binary(num);
    std::cout << binaryNumber;
}
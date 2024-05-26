#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result;
    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }
    cout << "String after removing non-alphabet characters: " << result << endl;

    return 0;
}
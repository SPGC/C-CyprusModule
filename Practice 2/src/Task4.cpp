#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);
    char oldChar;
    char newChar;
    cin >> oldChar >> newChar;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == oldChar) {
            input[i] = newChar;
        }
    }
    cout << input << "\n";
}
#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);
    cout << "Total: " << input.end() - input.begin() << "\t";
    int letters = 0;
    int digits = 0;
    for (auto c: input) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        }
    }
    cout << "Digits: " << digits << "\t Letters: " << letters << "\n";
}
#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);

    for (char & i : input) {
        if (isalpha(i)) {
            if (islower(i)) {
                i = toupper(i);
            } else {
                i = tolower(i);
            }
        }
    }
    cout << input << "\n";
}
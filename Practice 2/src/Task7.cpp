#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);
    string suffix;
    getline(cin, suffix);
    cout << ((input.size() - suffix.size() == input.rfind(suffix)) ? "true" : "false") << "\n";
}
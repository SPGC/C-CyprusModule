#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);
    string prefix;
    getline(cin, prefix);
    cout << ((0 == input.find(prefix)) ? "true" : "false") << "\n";
}
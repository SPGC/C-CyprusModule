#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    getline(cin, input);
    char c;
    cin >> c;
    int buffer = input.find_first_of(c);
    cout << (buffer >= input.size() ? -1 : buffer) << "\n";
}
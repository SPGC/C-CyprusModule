#include <iostream>
#include <string>
#include <vector>
#include <cstring>


using namespace std;

int main() {
    vector<string> storage;
    string buffer;
    while (true) {
        getline(cin, buffer);
        if (buffer[buffer.size() - 1] == '$') {
            buffer = buffer.substr(0, buffer.size() - 1);
            if (!buffer.empty()) {
                storage.push_back(buffer);
            }
            break;
        }
        storage.push_back(buffer);
    }
    for (auto iterator = storage.end() - 1; iterator != storage.begin(); iterator--) {
        cout << *iterator << "\n";
    }
    cout << *storage.begin() << "\n";
}
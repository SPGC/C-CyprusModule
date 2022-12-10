#include <iostream>


using namespace std;

long cube(int n) {
    long buffer = n;
    return buffer * buffer * buffer;
}

int main() {
    cout << "Enter a number ";
    int buffer;
    cin >> buffer;
    cout << cube(buffer) << "\n";
    return 1;
}
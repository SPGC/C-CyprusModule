#include <iostream>


using namespace std;

int main() {
    int a[3];
    int b[3];
    for (int &i: a) {
        cin >> i;
    }
    for (int &i: b) {
        cin >> i;
    }
    for (int i = 0; i < 3; i++) {
        cout << a[i] + b[i] << " ";
    }
}
#include <iostream>


using namespace std;

int main() {
    int a[2][3];
    int b[2][3];
    for (auto & i : a) {
        for (int & j : i) {
            cin >> j;
        }
    }
    for (auto & i : b) {
        for (int & j : i) {
            cin >> j;
        }
    }
    int c[2][3];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}
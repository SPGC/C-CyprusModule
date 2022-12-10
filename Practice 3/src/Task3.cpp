#include <iostream>


using namespace std;

void printArray(const int *ta, unsigned n) {
    for (int i = 0; i < n; ++i) {
        cout << *ta << " ";
//        *ta = 0; This line can't be compiled
        ta++;
    }
    cout << "\n";
}

int main() {
    int b;
    cin >> b;
    int a[b];
    for (int i = 0; i < b; ++i) {
        cin >> a[i];
    }
    printArray(&a[0], b);
}
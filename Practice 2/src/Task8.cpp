#include <iostream>


using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        a[i] = (i + 1) * 3;
        cout << a[i] << " ";
    }
}

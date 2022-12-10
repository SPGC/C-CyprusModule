#include <iostream>


using namespace std;

int main() {
    int counter = 0;
    int fNumber;
    int sNumber;
    int buffer;
    while (counter < 10) {
        cout << "Write 2 numbers\n";
        cin >> fNumber >> sNumber;
        buffer = fNumber + sNumber;
        cout <<"Result is " << buffer << "\n";
        if (buffer > 100) {
            return 1;
        }
        counter++;
    }
    return 1;
}

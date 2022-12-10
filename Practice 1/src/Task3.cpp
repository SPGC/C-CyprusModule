#include <iostream>
#include <cstdio>


using namespace std;

int main() {
    double pounds;
    const double CONVERSION_RATE = 1.5;
    cout << "Enter amount of pounds ";
    cin >> pounds;
    cout.precision(2);
    cout << "You will receive ";
    printf("%.2f \n", pounds / CONVERSION_RATE);
    return 1;
}

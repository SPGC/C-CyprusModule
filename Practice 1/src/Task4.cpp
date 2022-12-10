#include <iostream>


using namespace std;

double converterTOFDegree(double cDegree) {
    return 9 / 5.0 * cDegree + 32;
}

int main() {
    cout << "Input C degree ";
    double cDegree;
    cin >> cDegree;
    double fDegree = converterTOFDegree(cDegree);
    printf("%.2f degrees C = %.2f degrees F", cDegree, fDegree);
    return 1;
}

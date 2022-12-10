#include <iostream>


using namespace std;

void swap(int *ip1, int *ip2){
    int buffer = *ip2;
    *ip2 = *ip1;
    *ip1 = buffer;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(&a,&b);
    cout << a << " " << b << "\n";
}
#include <iostream>
#include <fstream>


using namespace std;

int main() {
    ofstream file("myfile.txt");
    file << "Hello world";
    file.close();
}

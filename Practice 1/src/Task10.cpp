#include <iostream>
#include <fstream>


using namespace std;

int main() {
    char buffer;
    ofstream file("myfile.txt");
    while (true) {
        cin >> buffer;
        if(buffer == '='){
            break;
        }
        file << buffer;
    }
    file.close();
}

#include <iostream>
#include <cstring>

using namespace std;

struct person {
    int id;
    char name[50];
};

int main() {
    auto *p1 = new person;
    strcpy(p1->name, "Jhon");
    cout << *((char *) (((void *) p1) + 4)) << "\n";
    cout << *((char *) (((int *) p1) + 1)) << "\n";
    cout << p1->name[0] << "\n";
    cout << *((*p1).name);
}
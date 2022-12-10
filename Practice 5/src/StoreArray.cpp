#include "../Include/StoreArray.hpp"

StoreArray::StoreArray() {
    arrayPointer = new int[4];
    for (int i = 0; i < 4; i++) {
        arrayPointer[i] = i * 2;
    }
}

void StoreArray::displayArray() {
    for (int i = 0; i < 4; i++) {
        std::cout << arrayPointer[i] << " ";
    }
    std::cout << "\n";
}

StoreArray::~StoreArray() {
    delete [] arrayPointer;
}
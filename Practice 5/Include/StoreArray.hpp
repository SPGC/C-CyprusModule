#ifndef PRACTICES_STOREARRAY_HPP
#define PRACTICES_STOREARRAY_HPP

#include <iostream>


class StoreArray {
private:
    int *arrayPointer;

public:
    StoreArray();
    void displayArray();
    ~StoreArray(); //To see mem leak comment destructor
};


#endif //PRACTICES_STOREARRAY_HPP

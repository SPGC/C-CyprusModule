#include <iostream>

#include "../Include/CPayRoll.hpp"
#include "../Include/StoreArray.hpp"
#include "../Include/CBook.hpp"
#include "../Include/CarDealer.hpp"


using namespace std;

int main() {
    auto cPayRoll = new CPayRoll("Not bob", 1);
    int *id = new int;
    string *name = new string;
    cPayRoll->GetDetails(*name, *id);
    cout << *name << " " << *id << "\n";
    cPayRoll->SetDetails("Bob", 2);
    cout << *name << " " << *id << "\n";

    auto storeArray = new StoreArray();
    storeArray->displayArray();

    auto cBook = CBook("NotHarry", "NotJoanne");
    string *author = new string;
    string *title = new string;
    cBook.GetDetails(*title, *author);
    cout << *title << " " << *author << "\n";

    auto carDealer = CarDealer();
    for (int i = 0; i < 5; ++i) {
        carDealer.purchaseCar(new Car("Audi", "Q" + to_string(i), 500 + i * 25));
    }
    carDealer.purchaseCar(new Car("Lada", "Kalina", 120));
    carDealer.print();
    carDealer.sellCar(2);
    carDealer.print();

    delete id; //If you want to see mem leak just comment one of the deletes
    delete name;
    delete title;
    delete author;
    delete storeArray; //I use valgrind with tool memcheck to detect mem leaks + I don't use Visual Studio. JetBrains are the best. You have to try CLion
    delete cPayRoll;
    return 1;
}
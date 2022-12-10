#include <iostream>

#include "../include/CPayRoll.hpp"
#include "../include/CBook.hpp"
#include "../include/CarDealer.hpp"
#include "../include/Employee.hpp"
#include "../include/CBookSeries.hpp"
#include "../include/Truck.hpp"
#include "../include/F1Car.hpp"
#include "../include/ConvertibleCar.hpp"


using namespace std;

int main() {
    auto employee1 = Employee("Bob", 1, 100000);
    auto employee2 = Employee("Bill", 2);
    employee1.pay();
    employee2.pay();
    auto bookSeries = CBookSeries("NotJoanne", "NotHPAndStone", "NotHP", "EveryoneKnows");
    cout << bookSeries.getAuthor() << " " << bookSeries.getEditor() << " " << bookSeries.getSeriesTitle() << " "
         << bookSeries.getTitle() << "\n";
    auto dealer = CarDealer();
    dealer.purchaseCar(new Truck("MAZ", "---", 1000, 6));
    dealer.purchaseCar(new F1Car("Ferrari", "F1-75", 1000, "Charles Leclerc"));
    dealer.purchaseCar(new ConvertibleCar("a", "b", 123, 4));
    dealer.print();
    return 1;
}
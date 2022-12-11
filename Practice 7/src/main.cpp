#include "../include/CMessage1.hpp"
#include "../include/CMessage2.hpp"
#include "../include/CarDealer.hpp"
#include "../include/Truck.hpp"
#include "../include/F1Car.hpp"
#include "../include/ConvertibleCar.hpp"
#include "../include/CInvestmentAccount.hpp"
#include "../include/CCurrentAccount.hpp"


using namespace std;

int main() {
    CTest *pMessages[4];
    pMessages[0] = new CMessage1;
    pMessages[1] = new CMessage2;
    pMessages[2] = new CMessage1;
    pMessages[3] = new CMessage2;
    for (auto &pMessage: pMessages) {
        pMessage->WriteMessage();
    }
    auto dealer = CarDealer();
    dealer.purchaseCar(new Truck("MAZ", "---", 1000, 6));
    dealer.purchaseCar(new F1Car("Ferrari", "F1-75", 1000, "Charles Leclerc"));
    dealer.purchaseCar(new ConvertibleCar("a", "b", 123, 4));
    cout << dealer.getCar(2)->toString() << "\n";
    dealer.print();

    CAccount *accounts[4];
    accounts[0] = new CCurrentAccount();
    accounts[1] = new CDepositAccount();
    accounts[2] = new CInvestmentAccount(2020);
    accounts[3] = new CInvestmentAccount(2021);
    int counter = 0;
    for (auto account: accounts) {
        cout << "Account " << counter << "\n";
        account->Deposit(1000);
        cout << account->GetBalance() << " ";
        account->Withdrawal(2000);
        cout << account->GetBalance() << " ";
        account->Withdrawal(1000);
        cout << account->GetBalance() << " ";
        account->Interest();
        cout << account->GetBalance() << " ";
        account->Deposit(1000);
        cout << account->GetBalance() << " ";
        account->Interest();
        cout << account->GetBalance() << "\n";
        counter++;
    }
    for (auto &pMessage: pMessages) {
        delete pMessage;
    }
    for (auto &account: accounts) {
        delete account;
    }
    return 1;
}
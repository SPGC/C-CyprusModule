#include <iostream>
#include <string>


using namespace std;

const string faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
                        "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const string colors[] = {"Red", "Black"};

int main() {
    string deck[13 * 4 * 2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 13; k++) {
                deck[i * 13 * 4 + j * 13 + k] = faces[k] + " " + suits[j] + " " + colors[i];
                cout << deck[i * 13 * 4 + j * 13 + k] << "; ";
            }
            cout << "\n";
        }
        cout << "_______________________________________\n";
    }
}
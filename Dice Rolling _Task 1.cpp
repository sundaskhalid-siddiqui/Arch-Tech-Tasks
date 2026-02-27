#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    char choice;

    // Seed random number generator
    srand(time(0));

    do {
        // Generate two random numbers between 1 and 6
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        cout << "You rolled: " << dice1 << " and " << dice2 << endl;

        cout << "Do you want to roll again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}

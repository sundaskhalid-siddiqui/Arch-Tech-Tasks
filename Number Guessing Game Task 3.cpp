#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
    int number, guess;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100: ";

    while (true) {
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again: ";
        }
        else if (guess < number) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Congratulations! You guessed the correct number.";
            break;
        }
    }

    return 0;
}

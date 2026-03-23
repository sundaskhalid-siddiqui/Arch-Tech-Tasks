#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    // Constructor
    ATM() {
        balance = 1000;  // Initial balance
    }

    void checkBalance() {
        cout << "Your current balance is: " << balance << endl;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Deposit successful.\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

int main() {
    ATM user;
    int choice;

    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                user.checkBalance();
                break;
            case 2:
                user.deposit();
                break;
            case 3:
                user.withdraw();
                break;
            case 4:
                cout << "Thank you for using ATM.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

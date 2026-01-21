#include <iostream>
using namespace std;

double withdrawSavings(double balance, double amount) {
    if (amount > 100000) {
        cout << "Cannot withdraw more than 100000\n";
        return balance;
    }
    double fee = 0.02 * amount;
    if (amount > 50000) fee += 0.05 * amount;
    if (amount + fee > balance) {
        cout << "Not enough balance\n";
        return balance;
    }
    balance -= (amount + fee);
    cout << "Fees deducted: " << fee << endl;
    return balance;
}

double withdrawCurrent(double balance, double amount) {
    if (amount > 100000) {
        cout << "Cannot withdraw more than 100000\n";
        return balance;
    }
    double fee = 100;
    if (amount > 50000) fee += 0.05 * amount;
    if (amount + fee > balance) {
        cout << "Not enough balance\n";
        return balance;
    }
    balance -= (amount + fee);
    cout << "Fees deducted: " << fee << endl;
    return balance;
}

int main() {
    double balance = 200000, amount;
    char type;
    string acc;

    cout << "Account type (S/C): ";
    cin >> type;

    if (type == 'S' || type == 's') {
        cout << "Savings account number: ";
        cin >> acc;
        cout << "Amount to withdraw: ";
        cin >> amount;
        balance = withdrawSavings(balance, amount);
    } else if (type == 'C' || type == 'c') {
        cout << "Current account number: ";
        cin >> acc;
        cout << "Amount to withdraw: ";
        cin >> amount;
        balance = withdrawCurrent(balance, amount);
    } else {
        cout << "Invalid account type\n";
    }

    cout << "Remaining balance: " << balance << endl;
    return 0;
}
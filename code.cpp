#include <iostream>
#include <vector>
using namespace std;

vector<double> expenses;

void addExpense(double amount) {
    expenses.push_back(amount);
    cout << "Added expense: $" << amount << endl;
}

void showExpenses() {
    double total = 0;
    cout << "Your Expenses:\n";
    for (double expense : expenses) {
        cout << "$" << expense << endl;
        total += expense;
    }
    cout << "Total: $" << total << endl;
}

int main() {
    int choice;
    double amount;

    do {
        cout << "\n1. Add Expense\n2. Show Expenses\n3. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter expense amount: ";
                cin >> amount;
                addExpense(amount);
                break;
            case 2:
                showExpenses();
                break;
        }
    } while (choice != 3);

    return 0;
}

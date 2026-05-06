#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    float balance;

public:
    BankAccount(int accNo, string accName, float bal)
    {
        accountNumber = accNo;
        name = accName;
        balance = bal;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully." << endl;
    }
    void withdraw(float amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    int accNo;
    string name;
    float balance, amount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;
    BankAccount account(accNo, name, balance);

    do
    {
        cout << "\n====== Bank Management System ======" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Amount to Deposit: ";
                cin >> amount;

                account.deposit(amount);
                break;

            case 2:
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;

                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}

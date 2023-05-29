#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolderName;
    string account_type;
    double balance;

public:
    BankAccount(string num, string name, string at, double bal)
    {
        accountNumber = num;
        accountHolderName = name;
        account_type = at;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Error: Insufficient funds." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        }
    }
    void checkBalance()
    {
        cout << "Account balance is $" << balance << endl;
    }
};

int main()
{
    // Create a new BankAccount object
    BankAccount myAccount("12345678925", "John Doe","saving",1000.0);

    // Use the object's methods to perform actions on the account
    myAccount.deposit(500.0);
    myAccount.withdraw(2000.0);
    myAccount.checkBalance();

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account class
class Account
{
private:
    int account_number;
    string account_holder_name;
    string account_type;
    float balance;

public:
    Account(int number, string name, string type, float balance)
    {
        this->account_number = number;
        this->account_holder_name = name;
        this->account_type = type;
        this->balance = balance;
    }

    // Deposit method
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited " << amount << " into account " << account_number << endl;
    }

    // Withdraw method
    void withdraw(float amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << account_number << endl;
        }
        else
        {
            cout << "Insufficient balance in account " << account_number << endl;
        }
    }

    // Get balance method
    float get_balance()
    {
        return balance;
    }

    // Get account number method
    int get_account_number()
    {
        return account_number;
    }
};

// Bank class
class Bank
{
private:
    vector<Account> accounts;
    int num_accounts;

public:
    Bank()
    {
        this->num_accounts = 0;
    }

    // Create account method
    void create_account(string name, string type, float balance)
    {
        num_accounts++;
        Account account(num_accounts, name, type, balance);
        accounts.push_back(account);
        cout << "Created account " << account.get_account_number() << " for " << name << " with balance " << balance << endl;
    }

    // Close account method
    void close_account(int number)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].get_account_number() == number)
            {
                accounts.erase(accounts.begin() + i);
                num_accounts--;
                cout << "Closed account " << number << endl;
                return;
            }
        }
        cout << "Account " << number << " not found" << endl;
    }

    // Deposit method
    void deposit(int number, float amount)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].get_account_number() == number)
            {
                accounts[i].deposit(amount);
                return;
            }
        }
        cout << "Account " << number << " not found" << endl;
    }

    // Withdraw method
    void withdraw(int number, float amount)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].get_account_number() == number)
            {
                accounts[i].withdraw(amount);
                return;
            }
        }
        cout << "Account " << number << " not found" << endl;
    }

    // Get balance method
    float get_balance(int number)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].get_account_number() == number)
            {
                return accounts[i].get_balance();
            }
        }
        cout << "Account " << number << " not found" << endl;
        return -1;
    }
};

int main()
{
    Bank bank;

    // Test the bank account management system
    bank.create_account("Alice", "savings", 500.0);
    bank.create_account("Bob", "current", 1000.0);

    bank.deposit(1, 1000.0);
}

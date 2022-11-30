#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
using namespace std;
class Account
{
private:
    // attributes
    string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount > 0)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}

#endif
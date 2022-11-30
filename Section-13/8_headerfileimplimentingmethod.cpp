#include <iostream>
#include "implimenting_header.h"
using namespace std;

int main()
{
    Account Tirth_account;
    Tirth_account.set_name("Tirth's account");
    Tirth_account.set_balance(1000.0);

    if (Tirth_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;

    if (Tirth_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    if (Tirth_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    return 0;
}
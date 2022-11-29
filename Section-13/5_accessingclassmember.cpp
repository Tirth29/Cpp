#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class player {
public: 
    //attribute
        string name {"player"};
        int health {100};
        int xp {5};
    //methods
    void talk(string text_to_say) {cout<<name<<" says "<<text_to_say<<endl;}
    bool is_dead();
};

class account 
{
public: 
    //attribute
        string name {"account"};
        double balance {0.0};
    //methods
        bool deposit(double bal) {balance += bal; cout<< "In deposit" <<endl;}
        bool withdraw(double bal) {balance -= bal; cout<< "In withdraw" <<endl;}

};


int main()
{
    account Tirth_account;
    Tirth_account.name = "Tirth_Account";
    Tirth_account.balance = 5000.0;

    Tirth_account.deposit(1000.0);
    Tirth_account.withdraw(500.0);

    player Tirth;
    Tirth.name = "Tirth";
    Tirth.health = 75;
    Tirth.xp= 15;
    Tirth.talk("Hey There");

    player *enemy= new player;
    enemy->name = "enemy";
    (*enemy).health = 85;
    (*enemy).xp=10;
    enemy->talk("I will kill you!");

    return 0;
}
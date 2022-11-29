#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class player {
    //attribute
        string name {"player"};
        int health {100};
        int xp {5};
    //methods
    void talk(string);
    bool is_dead();
};

class account 
{
    //attribute
        string name {"account"};
        double balance {0.0};
    //methods
        bool deposit(double);
        bool withdraw(double);

};


int main()
{
    account Tirth_account;
    account Viren_account;

    player Tirth;
    player Viren;
    player frank;

    player players[] {Tirth, Viren,frank};

    vector<player> player_vec {frank};
    player_vec.push_back(Tirth);

    player *enemy {nullptr};
    enemy = new player;

    delete enemy;

    return 0;
}
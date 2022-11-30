#include <iostream>
#include <string>
using namespace std;


class player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

class account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;  }
    
};
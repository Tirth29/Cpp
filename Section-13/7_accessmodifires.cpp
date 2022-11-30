#include <iostream>
#include <string>
using namespace std;

class player {
private: 
    //attribute
        string name {"player"};
        int health {100};
        int xp {5};
public:
    //methods
    void talk(string text_to_say) {cout<<name<<" says "<<text_to_say<<endl;}
    bool is_dead();
};

int main()
{
    player frank;
    // frank.name = "Frank";
    // frank.health=49;
    frank.talk("Hello");
    return 0;
}
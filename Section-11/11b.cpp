#include <iostream>
#include <cstdlib> // required for random number generation
#include <ctime> // required for time()
using namespace std;

int main ()
{
    int random_number {};
    size_t count{10};
    int min{1};
    int max{6};

    cout << "Max random number in my system is " << RAND_MAX << endl;
    srand(time(nullptr));

    for(size_t i = 0; i < count; i++)
    {
        random_number = rand()%max+min;
        cout << random_number << endl;
    }

    return 0;
}
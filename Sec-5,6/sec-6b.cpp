#include <iostream>

using namespace std;

int main (){

    cout << "Hello, welcome to frank's carpet cleaning service" << endl;
    cout << "\nHow many rooms do you want to cleaned ? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << 32.50 << endl;
    cout << "Cost : $" << 32.50*number_of_rooms << endl;
    cout << "Tax: $" << 32.50*number_of_rooms*0.06 << endl;
    cout << "=================================================" << endl;
    cout << "Total estimate: $" << (32.50*number_of_rooms) + (32.50*number_of_rooms*0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;
    
    // or

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << price_per_room << endl;
    cout << "Cost : $" << price_per_room*number_of_rooms << endl;
    cout << "Tax: $" << price_per_room*number_of_rooms*sales_tax << endl;
    cout << "=================================================" << endl;
    cout << "Total estimate: $" << (price_per_room*number_of_rooms) + (price_per_room*number_of_rooms*sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}
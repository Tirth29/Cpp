#include <iostream>

using namespace std;

int main (){
    int counter {10};
    int result {0};

    cout << "Counter : " << counter << endl;

    counter = counter + 1;
    cout << "Counter : " << counter << endl;

    counter++;
    cout << "Counter : " << counter << endl;

    ++counter;
    cout << "Counter : " << counter << endl;

    // Example-2
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result =++counter;
    cout << "Counter : " << counter << endl;
    cout << "Result -2 : " << result << endl;

    // Example-3
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result=counter++;
    cout << "Counter : " << counter << endl;
    cout << "Result-3 : " << result << endl;

    // example-4

    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result=++counter + 10;
    cout << "Counter : " << counter << endl;
    cout << "Result-4 : " << result << endl;

    // Example-5
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result=counter++ + 10;
    cout << "Counter : " << counter << endl;
    cout << "Result-5 : " << result << endl; 


    return 0;
}
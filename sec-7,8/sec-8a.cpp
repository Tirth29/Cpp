#include <iostream>

using namespace std;

int main (){

    int num1 {10};
    int num2 {20};

    num1 = num2 = 2000;
 
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    int sum = num1 + num2;
    cout << "Sum is " << sum << endl;

    cout << endl;
    return 0;
}
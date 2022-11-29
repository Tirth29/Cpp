#include <iostream>
#include <cmath>
using namespace std;
int main (){

    double num;
    cout << "Enter a number (double) : " <<endl;
    cin >> num;
    
    cout << "Square root of given number is " << sqrt(num) << endl;
    cout << "Cube root of "  << num << " is " << cbrt(num) << endl;
    cout << "Sine value of given number is " << sin(num) << endl;
    cout << "COSine value of given number is " << cos(num) << endl;
    cout << "The ceil of given number is " << ceil(num) << endl;
    cout << "The floor of given number is " << floor(num) << endl;
    cout << "The round of given number is " << round(num) << endl; 

    double power;
    cout << "Enter a number for raised the power "  << endl;
    cin >> power;
    cout << "The " << power << " powere of the number is " << num << " is " << pow(num, power) << endl;

    return 0;
}
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;
int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout<<"Enter your first name : "<< endl;
    cin >> first_name;
    cout << "Enter your last name : "<<endl;
    cin>> last_name;
    cout<<"Hello "<< first_name <<"\nYour first name has " << strlen(first_name)<<" characters."<<endl;
    cout    << "Your last name has " << strlen(last_name)<<" characters."<<endl;

    strcpy(full_name, first_name);
    strcat(full_name, " "); 
    strcat(full_name, last_name);
    cout<< "Your full name is "<<full_name<< " and it has "<<strlen(full_name)<<" characters."<<endl;            

    string s1 {"This is a test string"};
    cout<<s1.erase(0,5);
    cout<<s1.erase(5,4);
    // cout<<s1.clear();
    return 0;


}
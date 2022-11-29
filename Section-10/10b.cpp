#include <iostream>
#include <string>

using namespace std;
int main() {
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1,0,3};
    string s7 {2 ,'X'};

    cout << s0<< endl;
    cout << s0.length()<< endl;

    cout<< s1 << endl<<s2 << endl<< s3 << endl<< s4<< endl << s5<< endl << s6 << endl << s7 << endl;

    s1="watermelon";
    cout << "s1 is now " << s1 << endl;
    s2=s1;
    cout << "s2 is now " << s2 << endl;

    s3="Frank";
    cout << "s3 is now " << s3 << endl;

    s3[0]='P';
    cout << "s3 is now "<< s3 << endl;
    

    //concentrate
    s3="watermelon";
    s3= s5 + " And " + s2 + " Juice.";

    // for loop
    s1="Apple";
    for(int i{0};i<s1.length();i++)
        cout << s1[i] << endl;

    // Ranged based for loop 

    for(char c:s1)
        cout << c << endl;

    // substring
    // s1="This is a test";
    // cout << s1.substr(0,4) << endl;
    // cout << s1.substr(5,2) << endl;
    // cout << s1.substr(10,4) << endl;

    // // erase
    //     string s1 {"This is a test string"};
    // cout<<s1.erase(0,5)<<endl;
    // cout<<s1.erase(5,4)<<endl;
    // // cout<<s1.clear();

    // getline
    string full_name {};
    cout << "Enter your full name: " << endl;
    getline(cin, full_name);

    cout << "Your full name is : " << full_name << endl;

    // find 
    s1="The secret word is Boo";
    string word{};

    cout << "Enter the word to find : " << endl;
    cin >> word;

    size_t postion = s1.find(word);
    if (postion != string::npos)
        cout << "Found " << word << " at position "<< postion << endl;
    else 
        cout << "Sorry "<< word << " Not found " << endl;

    cout << endl;


    return 0;
}
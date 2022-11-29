#include <iostream>

using namespace std;

main (){

    cout << "Hello, welcome to frank's carpet cleaning service" << endl;
    int numofbigroom ;
    cout << "Enter the number of big room do u want to clean ? " << endl;
    cin >> numofbigroom;

    int numofsmallroom ;
    cout << "Enter the number of small room do you want to clean ? " << endl;
    cin >> numofsmallroom;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of big room : " << numofbigroom << endl;
    cout << "Number of small room : " << numofsmallroom << endl;

    const double p_s_r {25};
    const double P_b_r {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    cout << "Price per small room is $ : " << p_s_r << endl;
    cout << "Price per big room is $ : " << P_b_r << endl;
    cout << "cost : " << (numofbigroom*P_b_r) + (numofsmallroom*p_s_r) << endl;
    cout << "tax : " << (numofbigroom*P_b_r*sales_tax) + (numofsmallroom*p_s_r*sales_tax) << endl;
    cout << "Total estimate is : " << (numofbigroom*P_b_r) + (numofsmallroom*p_s_r) + (numofbigroom*P_b_r*sales_tax) + (numofsmallroom*p_s_r*sales_tax) << endl;

    cout << "This estimate is valid for 30 days."<< endl;

    return 0;
}
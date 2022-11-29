#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector <int> test_scores {100,98,95};
    cout << "\nTest scores using array syntax: " << endl;

    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nThere are " << test_scores.size() <<"scores in the vector" << endl;

    cout << "\nEnter 3 test score : " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test score : " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter one more test score to add to the vector : ";
    int score_to_add;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector : ";

    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now : " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nThere ara now " << test_scores.size() << " scores in the vector" << endl;

//     cout <<"This should cause an exception!!" << test_scores.at(10) << endl;

    // Example of 2-D vector

    vector <vector<int>> movie_ratings

    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntex : " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntex : " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
    
    return 0;
}
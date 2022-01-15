// Score Rater 3.0
// Demonstrate if else-if else suite

#include <iostream>
using namespace std;

int main ()
{

    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 1000)
    {
        cout << "You socred 1000 or more. Impressive!\n";
    }
    else if (score >= 500)
    {
        cout << "You scored 500 or more. Nice. \n";
    }

}
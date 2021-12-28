#include <iostream>
#include <string>
using namespace std;

int main()
{

/* 1. Create a list of six legal variable names - three good choices and three bad choices. Explain why each
name falls into the good or bad category. */

    int ROUND6; //this is a bad name because upper case names are used in constants
 // int 6round;    variables names shoudn't start with numbers
    int thisIsOneVeryLongNameForAVariable; // variables must be short an straight to the point.

/* What's displayed by each line in the following code snippet? Explain each result */

    cout << "Seven divided by three is " << 7 / 3 << endl; //2
    cout << "Seven divided by three is " << 7.0 / 3 << endl; //2.33
    cout << "Seven divided by three is " << 7.0 / 3.0 << endl; //2.33

/* Write a program that gets three game scores from the user and displays the average. */
    int score1;
    cout << "Score 1: " << endl;
    cin >> score1;

    int score2;
    cout << "Score 2: " << endl;
    cin >> score2;

    int score3;
    cout << "Score 3: " << endl;
    cin >> score3;

    int scores = score1 + score2 + score3;
    int average = scores / 3;

    cout << "Your average score is: " << average;
}




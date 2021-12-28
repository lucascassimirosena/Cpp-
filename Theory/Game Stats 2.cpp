//Game Stats 2.0
//Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;

    //altering the value of a variable
    score = score + 100;
    cout << "score: " << score << endl;

    //combined assigment operator
    /* "Add whatever's on the right to what's one the left and assing the 
    result back to what's one the left" */
    score += 100;
    cout << "score: " << score << endl;

    //increment operator
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;

    lives = 3;

    lives++;
    cout << "lives: " << lives << endl;

    lives =3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    //interger wrap around
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    return 0;
}
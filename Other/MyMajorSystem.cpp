/* Alright if you stumbled upon this file you must be asking yourself WHAT THE HELL DOES 
"The Major System mean". I'll explain you in the following lines and then you can create your own */

/* The Major System is nothing more than a memory technique that converts numbers into phonetic sounds.
When we do it we can help our brains to remember them more easily.

For instance, if you were to remember the number 20248321 you would find it more easily if you had
imagined an story in your mind related to that number.

For me these numbers have different meaning, for example:
20 - Nasa
24 - Nero
83 - Game
21 - Net

Nasa invites Nero to play a Game called 'Net'.
20248321.

Why do I think about these meanings when I think about these numbers? Well as I said,
the goal is to turn each number into a phonetic sound, we do it by converting numbers into letters:

0 - "S", "SS"
1 - "T" or "D"
2 - "N"
3 - "M"
4 - "R"
5 - "L"
6 - "CH" , "SH" or "X"
7 - "G" or "K"
8 - "F" or "V"
9 - "P" or "B"

This is these are the basic building blocks of this technique. You can make your own rules.
So here we go. I made the rest of the code just to help myself to remind my Major System. If you're
going to start using this technique I suggest you to create your own. */

#include <iostream>
using namespace std;

int main()
{

const int s = 0;
const int t = 1;
const int n = 2;
const int m = 3;
const int r = 4;
const int l = 5;
const int ch = 6;
const int g = 7;
const int f = 8;
const int p = 9;

int guess;

cout << "Let's play a game just to warm up" << endl;
cout << "I say a letter and you tell me the corresponding number in the major system." << endl;
cout << "S: ";
cin >> guess;


if (guess == s)
{
   cout << "Well done!" << endl;
}
else
{
cout << "Try again." << endl;
}

cout << 

}
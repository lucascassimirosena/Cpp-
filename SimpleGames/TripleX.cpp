#include <iostream>
using namespace std;

int main()
{
    cout << "You are about to enter a secret party" << endl;
    cout << "The guard requests you the correct code to enter it..." << endl;

    const int a = 4;
    const int b = 3;
    const int c = 2;

    //Variables can be changed but constants can't

    const int CodeSum = a + b +c;
    const int CodeProduct = a * b * c;

    cout << "+ There are 3 numbers in the code" << endl;
    cout << "+ The codes adds-up to: " << CodeSum << endl;
    cout << "+ The codes multiply to give: " << CodeProduct << endl;

    int GuessA;
    int GuessB;
    int GuessC;
    cout << "What's your guess? " << endl;
    cin >> GuessA; 
    cin >> GuessB; 
    cin >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;


    return 0;
}
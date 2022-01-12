#include <iostream>
using namespace std;


void PrintIntroduction()
{
    cout << "You are about to enter a secret party" << endl;
    cout << "The guard requests you the correct code to enter it..." << endl;
}



bool PlayGame()
{
    PrintIntroduction();

    const int a = 4;
    const int b = 3;
    const int c = 2;

    //Variables can be changed but constants can't

    const int CodeSum = a + b +c;
    const int CodeProduct = a * b * c;

    cout << "+ There are 3 numbers in the code" << endl;
    cout << "+ The codes adds-up to: " << CodeSum << endl;
    cout << "+ The codes multiply to give: " << CodeProduct << endl;

    int GuessA, GuessB, GuessC;
    cout << "What's your guess? " << endl;
    cin >> GuessA >> GuessB >> GuessC;

    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;


    //Check if the player's guess is correct
    if (GuessSum == 9)
    {
        if (GuessProduct == 24)
        {
        cout << "Nice job! You may enter the party.\n" << endl;
        return true;
        }
    }
    else
    {
        cout << "You can't enter.\n" << endl;
        return false;
    }


}

int main()
{
while (true)
{
    bool bLevelComplete = PlayGame();
    cin.clear(); //Clear any errors
    cin.ignore(); //Discards the buffer

}
}
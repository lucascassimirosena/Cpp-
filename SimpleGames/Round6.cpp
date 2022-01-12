//Round 6 Game
//Simulates Round 6 glass stage but in and editor

#include <iostream>
using namespace std;

int main()
{
    int Opt1 = 1;
    int Opt2 = 2;
    cout << "Choose one: " << Opt1 << " , " << Opt2 << endl;


    int choice;
    cin >> choice;
        if(choice == Opt1)
        {
            cout << "Very good, you jumped on the real glass" << endl;
        }
        else
        {
            cout << "That was really a high fall" << endl;
        }
    
    cout << "Choose again: " << Opt1 << " , " << Opt2 << endl;
    cin >> choice;
        if(choice == Opt2)
        {
            cout << "Very good, you're still alive" << endl;
        }
        else
        {
            cout << "Hmm, the second glass was fake, goodbye" << endl;
        }

    cout << "Choose again: " << Opt1 << " , " << Opt2 << endl;
    cin >> choice;
        if(choice == Opt2)
        {
            cout << "Great! But if I were you I'd hurry, there's people approaching behing you." << endl;
        }
        else
        {
            cout << "Too bad, I really thought you would win" << endl;
        }

    cout << "Choose again: " << Opt1 << " , " << Opt2 << endl;
    cin >> choice;
        if(choice == Opt2)
        {
            cout << "We have a winner!" << endl;
        }
        else
        {
            cout << "What pitty, you almost made it, it's game over for you" << endl;
        }





    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        cout << "This is aways displayed.\n\n";
    }
    if (false)
        cout << "This is never displayed.\n\n";


int score = 500;

if (score)
{
    cout << "You scored 500 or more. Nice.\n\n";

    if (score >= 1000)
    {
      cout << "You scored 1000 or more. Impressive!\n\n";
    }
}
}
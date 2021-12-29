// I decided to  create a simple calculator
#include <iostream>
using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    int product;

    cout << "Type a number: " << endl;
    cin >> firstNumber;

    cout << "Type another number: " << endl;
    cin >> secondNumber;

    product = firstNumber * secondNumber;
    cout << "The product is " << product << endl;

}
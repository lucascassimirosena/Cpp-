/*

Read 3 numbers from stdin and print their sum to stdout.

Input Format

One line that contains 3 space-separated integers: a, b, and c.

Output Format

Print the sum of the three numbers on a single line. */

#include <iostream>
using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    int sum;
    
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << sum;
    
    
     
    return 0;
}
/* 
 * Demonstrates some issues with relational operators.
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( )
{
#pragma region Tricky Comparison

    int value;

    cout << "Enter an integer: ";
    cin >> value;
    
    int remainder = (value % 2);
    bool isOdd = (remainder = 1);
    cout << value << " is odd: " << isOdd << endl;

#pragma endregion

#pragma region Real Comparison

    double small = 1E-20;
    double x = 1 - small;
    double y = 1 + small;

    cout << endl << fixed << x << " == " << y << ": " << (x == y) << endl;

#pragma endregion

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
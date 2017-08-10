/*
 * Demonstrates short circuit evaluation.
 */
#include <iostream>

using namespace std;

bool isEven ( int value )
{
    bool even = ((value % 2) == 0);
    if (even)
        cout << value << " is even" << endl;
    else
        cout << value << " is odd" << endl;

    return even;
};

void main ( )
{
    int value1, value2, value3;

    cout << "Enter three numbers: ";
    cin >> value1 >> value2 >> value3;

    if (isEven(value1) && isEven(value2) && isEven(value3))
        cout << "All values are even.";
    else
        cout << "Some values are odd.";
        
#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
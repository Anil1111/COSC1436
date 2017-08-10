#include <iostream>

using namespace std;

void main ( )
{
    int first, second;

    //Get the first number
    cout << "Enter the first number: ";
    cin >> first;

    //Get the second number
    cout << "Enter the second number: ";
    cin >> second;

    //Add them together
    int result = first + second;
    cout << first << " + " << second << " = " << result << endl;
    
#pragma region Wait
    cout << "\nPress ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
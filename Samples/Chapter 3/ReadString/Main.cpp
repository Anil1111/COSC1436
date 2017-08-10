#include <iostream>
#include <string>

using namespace std;

void main ( void )
{	
    string firstName, lastName;

    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;

	cout << "Hello " << firstName << " " << lastName << endl;

#pragma region Wait
    cout << "\nPress ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
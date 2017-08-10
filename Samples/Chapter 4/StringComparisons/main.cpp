/*
 * Demonstrates string comparison.
 */
#include <iostream>
#include <string>

using namespace std;

void main ( )
{
#pragma region Char Way

    char charOption;

    cout << endl << "Using char ==" << endl;
    cout << "Select an option: " << endl;
    cout << "C)reate a new account" << endl;
    cout << "D)elete an existing account" << endl;
    cout << "U)pdate an existing account" << endl;
    cin >> charOption;

    if ((charOption = 'C') || (charOption = 'c'))
        cout << "Creating an account" << endl;
    else if ((charOption = 'D') || (charOption = 'd'))
        cout << "Deleting an account" << endl;
    else if ((charOption = 'U') || (charOption = 'u'))
        cout << "Updating an account" << endl;
    else
        cout << "Unknown option" << endl;
#pragma endregion

#pragma region String Way

    string stringOption;

    cout << endl << "Using strcmp" << endl;
    cout << "Select an option: " << endl;
    cout << "C)reate a new account" << endl;
    cout << "D)elete an existing account" << endl;
    cout << "U)pdate an existing account" << endl;
    cin >> stringOption;

    if (stringOption == "C")
        cout << "Creating an account" << endl;
    else if (stringOption == "D")
        cout << "Deleting an account" << endl;
    else if (stringOption == "U")
        cout << "Updating an account" << endl;
    else
        cout << "Unknown option" << endl;
#pragma endregion
    
#pragma region C-Style Way

    char wrongOption[10];

    cout << endl << "Using string == " << endl;
    cout << "Select an option: " << endl;
    cout << "C)reate a new account" << endl;
    cout << "D)elete an existing account" << endl;
    cout << "U)pdate an existing account" << endl;
    cin >> wrongOption;

    if (wrongOption == "C")
        cout << "Creating an account" << endl;
    else if (wrongOption == "D")
        cout << "Deleting an account" << endl;
    else if (wrongOption == "U")
        cout << "Updating an account" << endl;
    else
        cout << "Unknown option" << endl;
#pragma endregion

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
/*
 * Demonstrates simple usage of the IF-ELSE statement.
 */
#include <iostream>

using namespace std;

void main ( )
{
    //Display a menu
    char haveLogin;
    cout << "Do you have a login (Y/N)?";
    cin >> haveLogin;
    
    char userName[100], password[100];

    if (haveLogin == 'Y')
    {
        cout << "Please enter your user name: ";
        cin >> userName;

        cout << "Password: ";
        cin >> password;
    } else //No login
    {
        cout << "Enter a unique user name: ";
        cin >> userName;

        cout << "Password: ";
        cin >> password;

        char confirmPassword;
        cout << "Confirm password: ";
        cin >> confirmPassword;
    };

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}
/*
 * COSC 1436
 *
 * Demonstrates various std::string functions
 */
#include <iostream>
#include <string>

using namespace std;

void DisplayString ( char const* value )
{
    cout << value << endl;
}

void GetValidString ( string& value )
{
    cin.ignore();

    do
    {
        cout << "Enter a non-empty string: ";
        getline(cin, value);
    } while (value.empty());
}

void DisplayString ( string const& value )
{
    cout << "Value: " << value << endl;
}

void main ()
{
    string someString = "Hello World";

    //Convert to C-string    
    DisplayString(someString.c_str());

    //Length
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    cout << "You entered a string of length " << userInput.length() << endl;

    //Empty strings
    GetValidString(userInput);
    
    cout << "You entered: " << userInput << endl;

    //Clear
    userInput.clear();
    DisplayString(userInput);
}
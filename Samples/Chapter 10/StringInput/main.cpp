/*
 * COSC 1436
 *
 * Demonstrates input and output of std::string
 */
#include <iostream>
#include <string>

using namespace std;

void main ()
{
    string firstName, lastName;

    //Get user's name
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;

    //Get user's street address
    string address;
    cout << "What is your street address: ";
    cin.ignore();
    getline(cin, address);

    //Friendly prmopt
    cout << "Hello " << firstName << " " << lastName << " of " << endl
         << address << " !!" << endl;    
}
//MULTLINE COMMENT
/*
 * Demonstrates the parts of a C++ program.
 */

#include <iostream>

//USING STATEMENT - Brings the members of a namespace into scope
using namespace std;

//PREPROCESSOR DIRECTIVE - Another include directive
#include "main.h"

//FUNCTION - Allows for modular programming
int main ( void )
{
	//VARIABLE DECLARATIONS - Declares a couple of string variables
    char firstName[100];
    char lastName[100];

    //OUTPUT statement - Use of the cout object, << operator and a string literal
    cout << "Enter your first name:";

	//INPUT statement - Use of the cin object, getline function, sizeof operator
    cin.getline(firstName, sizeof(firstName));
    
	//OUTPUT statement #2
	cout << "Enter your last name:";

	//INPUT statement #2
    cin.getline(lastName, sizeof(lastName));

    //OUTPUT statement #3 - mixes variables and string literals
    cout << "Hello " << firstName << " " << lastName << endl;    

	//OUTPUT statement #4
	cout << endl << "Press ENTER to quit";
    cin.get();

	//RETURN statement - return keyword and integer literal
    return 0;
}
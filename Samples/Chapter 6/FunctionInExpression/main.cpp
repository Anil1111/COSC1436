/*
 * COSC 1436
 * 
 * Demonstrates using functions in expressions.
 */
#include <iostream>
#include <ctype.h>
#include "common.h"

using namespace std;

// SUMMARY: Gets a character at the given index in a string.
// PARAMETERS:
//    value - The string.
//    index - The zero-based index.
// RETURNS: The character at the index.
char GetCharAt ( char* value, int index )
{ return value[index]; };

// SUMMARY: Determines if a character is a token.
// PARAMETERS:
//    ch - The character to check.
// RETURNS: True if the character is a letter, digit, dash underscore
bool IsToken ( char ch )
{
	return isalnum(ch) || (ch == '_') || (ch == '-');
};

// SUMMARY: Validates a string as an e-mail address.
// PARAMETERS:
//    email - The string to validate.
// RETURNS: True if the string is a valid e-mail.    
// REMARKS: 
//    Email is of the form '[token]+@[host].[domain] where
//       token  := letter-digit-underscore-dash
//       host   := [token]+
//       domain := [token]+
bool ValidateEmail ( char* email )
{
	bool parsingDomain = false, parsingHost = false;

	//Enumerate each character
	int len = strlen(email);
	for (int index = 0; index < len; ++index)
	{
		char ch = GetCharAt(email, index);

		//What state are we in
		if (parsingHost)
		{
			//Must be a token or a dot
			if (ch == '.')
			{
				//Change states
				parsingHost = false;
				parsingDomain = true;
			} else if (!IsToken(ch))
				return false;
		} else if (parsingDomain)
		{
			if (!IsToken(ch))
				return false;
		} else //neither
		{
			//Must be a token or a @
			if (ch == '@')
			{
				parsingHost = true;
			} else if (!IsToken(ch))
				return false;
		};
	};	

	//E-mail is only valid if we've seen the domain
	return parsingDomain;
};

void main ( )
{	
	do
	{
		//Get the e-mail address
		char email[1024];
		cout << "Enter a valid e-mail address: ";
		cin >> email;

		//Validate
		if (!ValidateEmail(email))
			cout << "ERROR: The e-mail you entered is invalid." << endl;
		else
		{
			cout << "The e-mail has been accepted." << endl;
			break;
		};
	} while (true);

	WaitForEnter();
}
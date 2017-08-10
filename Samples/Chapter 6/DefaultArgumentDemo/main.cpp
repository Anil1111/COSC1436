/*
 * COSC 1436
 * 
 * Demonstrates default arguments.
 */
#include <iostream>
#include "common.h"

using namespace std;

int main ( )
{
	while (true)
	{
		char password[100];
		cout << "Enter a password: ";
		cin >> password;
		
		if (strlen(password) < 5)
		{
			cout << "The password is small.  Enter a more complex password.";
			WaitForEnter();
		} else if ((StringsAreEqual(password, "password", false)) ||
				   (StringsAreEqual(password, "Password", false)) ||
				   (StringsAreEqual(password, "administrator", true)))
		{
			cout << "The password is too common.  Choose another one.";
			WaitForEnter();
		} else
		{
			cout << "Updated password." << endl;
			cin.ignore();
			WaitForEnter();
		};
	};

	return 0;
}
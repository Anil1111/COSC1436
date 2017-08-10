/* 
 * COSC 1436
 * 
 * Demonstrates the return statement.
 */
#include <iostream>
#include "Account.h"

using namespace std;

/**************************************************
 * Menu processing
 **************************************************/

// Summary: Displays the menu.
void DisplayMenu ( )
{
	cout << "Enter an option: " << endl;
	cout << "D)eposit Money" << endl;
	cout << "W)ithdraw Money" << endl;
	cout << "T)ransfer Money" << endl;
	cout << "Q)uit" << endl;
}

// Summary: Handles menu selections.
void HandleMenu ( char option )
{
	switch(option)
	{
		case 'D' : DepositMoney(); break;
		case 'W' : WithdrawMoney(); break;
		case 'T' : TransferMoney(); break;
		default: cout << "Unknown option" << endl;
	};

	cout << endl;
}

// Summary: Processes menu selections.
void ProcessMenu ( )
{
	while (true)
	{
		DisplayMenu();
		
		//Get input
		char option;
		cin >> option;

		if (option == 'Q')
			return;
		
		HandleMenu(option);	
	};
}

void main ( )
{
	ProcessMenu();
}
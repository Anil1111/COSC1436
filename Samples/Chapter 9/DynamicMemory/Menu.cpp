/*
 * COSC 1436
 * 
 * Contains the menu definitions.
 */
#include <iostream>
#include "menu.h"

using namespace std;

MenuOption DisplayMenu ( )
{
	while(true)
	{
		cout << endl;
		cout << "Menu" << endl;
		cout << "--------" << endl;
		cout << "O)pen File" << endl;
		cout << "C)lose File" << endl;
		cout << "Q)uit" << endl;

		char ch;
		cin >> ch;
		
		switch(toupper(ch))
		{
			case 'O' : return MO_OpenFile;
			case 'C' : return MO_CloseFile;
			case 'Q': return MO_Quit;
			default:
			{
				cout << "Bad option" << endl;
			};
		};
	};
};



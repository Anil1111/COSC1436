/* 
 * COSC 1436
 *
 * Demonstrates the use of character conversion routines.
 */
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cctype>

using namespace std;

void main ( )
{
	cout << "Enter a character or press Q to quit." << endl << endl;

	cout << setw(10) << "Initial" << setw(10) << "Upper" << setw(10) << "Lower" << endl;
	cout << "---------------------------------------------------------------------" << endl;

	while (true)
	{		
		char ch = _getch();
		if (tolower(ch) == 'q')
			break;

		cout << setw(10) << ch << setw(10) << (char)toupper(ch) << setw(10) << (char)tolower(ch) << endl;
	};
}
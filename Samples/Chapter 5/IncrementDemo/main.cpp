/*
 * Demonstrates prefix/postfix- increment and decrement 
 */ 
#include <iostream>
#include <iomanip>

using namespace std;

void main ( void )
{
	int value = 20;
	int returnedValue = 0;
	
	cout << left << setw(20) << "Instruction" << right << setw(10) << "Value" << setw(10) << "Returned" << endl;
	cout << left << setw(20) << "Initial" << right << setw(10) << value << setw(10) << returnedValue << endl;
	cout << endl;

#pragma region Postfix Increment

	returnedValue = value++;

	cout << left << setw(20) << "X++ After" << right << setw(10) << value << setw(10) << returnedValue << endl;
	cout << endl;
#pragma endregion

#pragma region Prefix Increment

	returnedValue = ++value;

	cout << left << setw(20) << "++X After" << right << setw(10) << value << setw(10) << returnedValue << endl;
	cout << endl;
#pragma endregion

#pragma region Postfix Decrement

	returnedValue = value--;

	cout << left << setw(20) << "X-- After" << right << setw(10) << value << setw(10) << returnedValue << endl;
	cout << endl;
#pragma endregion

#pragma region Prefix Decrement

	returnedValue = --value;

	cout << left << setw(20) << "--X After" << right << setw(10) << value << setw(10) << returnedValue << endl;
#pragma endregion

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
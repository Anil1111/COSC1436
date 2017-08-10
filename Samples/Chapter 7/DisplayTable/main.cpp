/*
 * COSC 1436
 *
 * Demonstrates enumerating a table of values.
 */
#include <iostream>
#include <iomanip>

using namespace std;

const int ARRAY_SIZE = 12;

//Prints out a table.
void DisplayTable ( int table[][ARRAY_SIZE], int rows )
{
	//Display header
	cout << left << setw(4) << "Row";
	for (int col = 0; col < ARRAY_SIZE; ++col)
	{
		cout << left << setw(4) << col + 1;
	};
	cout << endl;

	//Display table
	for (int row = 0; row < rows; ++row)
	{
		cout << left << setw(4) << row + 1;

		for (int col = 0; col < ARRAY_SIZE; ++col)
		{
			cout << left << setw(4) << table[row][col];
		};

		cout << endl;
	};
}; 

void main ( )
{		
    int table[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

	//Initialize
	for (int row = 0; row < ARRAY_SIZE; ++row)
		for (int col = 0; col < ARRAY_SIZE; ++col)
			table[row][col] = (row + 1) * (col + 1);
	
	//Display the table
	DisplayTable(table, ARRAY_SIZE);
}

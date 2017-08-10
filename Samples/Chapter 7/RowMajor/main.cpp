/*
 * COSC 1436
 *
 * Demonstrates enumerating a table of values.
 */
#include <iostream>
#include <iomanip>
#include "Stopwatch.h"

using namespace std;

const int ARR_SIZE = 300;

//Prints out a table.
void DisplayTable ( int table[][ARR_SIZE], int rows )
{
	//Display header
	cout << left << setw(4) << "Row";
	for (int col = 0; col < ARR_SIZE; ++col)
	{
		cout << left << setw(4) << col + 1;
	};
	cout << endl;

	//Display table
	for (int row = 0; row < rows; ++row)
	{
		cout << left << setw(4) << row + 1;

		for (int col = 0; col < ARR_SIZE; ++col)
		{
			cout << left << setw(4) << table[row][col];
		};

		cout << endl;
	};
}; 

int columnMajorTable[ARR_SIZE][ARR_SIZE];

double ColumnMajor ( )
{
	Stopwatch sw;
	
	sw.Start();
	for (int col = 0; col < ARR_SIZE; ++col)
		for (int row = 0; row < ARR_SIZE; ++row)
			columnMajorTable[row][col] = (row + 1) * (col + 1);
	sw.Stop();	

	return sw.GetTotalMilliseconds();
}

int rowMajorTable[ARR_SIZE][ARR_SIZE];

double RowMajor ( )
{
	Stopwatch sw;
	
	sw.Start();
	for (int row = 0; row < ARR_SIZE; ++row)
		for (int col = 0; col < ARR_SIZE; ++col)
			rowMajorTable[row][col] = (row + 1) * (col + 1);
	sw.Stop();	

	return sw.GetTotalMilliseconds();
}

void main ( )
{		
	double rowMajorTime = RowMajor();
	cout << "It took " << fixed << rowMajorTime << " milliseconds for row major" << endl;
	
	double columnMajorTime = ColumnMajor();
	cout << "It took " << fixed << columnMajorTime << " milliseconds for column major" << endl;
}

/*
 * COSC 1436
 *
 * Compares two-dimensional tables.
 */
#include <iostream>

using namespace std;

//Compares two arrays for equality.
bool CompareArrays ( int arr1[], int length1, int arr2[], int length2 )
{	
	if (length1 != length2)
		return false;

	for (int index = 0; index < length1; ++index)
	{
		if (arr1[index] != arr2[index])
			return false;
	};

	return true;
};

//Compares two tables for equality.
bool CompareTables ( int arr1[][4], int length1, int arr2[][4], int length2 )
{
	if (length1 != length2)
		return false;

	for (int row = 0; row < length1; ++row)
	{
		if (!CompareArrays(arr1[row], 4, arr2[row], 4))
			return false;
	};
	
	return true;
};

void main ( )
{
	//Initialize using initializer expression
	int multTableInit[4][4] = {
		{ 1, 2, 3, 4 },
		{ 2, 4, 6, 8 },
		{ 3, 6, 9, 12 },
		{ 4, 8, 12, 16 }
	};

	//Initialize using indexing
	int multTableWithIndex[4][4] = { 0 };
	multTableWithIndex[0][0] = 1;
	multTableWithIndex[0][1] = 2;
	multTableWithIndex[0][2] = 3;
	multTableWithIndex[0][3] = 4;
	
	multTableWithIndex[1][0] = 2;
	multTableWithIndex[1][1] = 4;
	multTableWithIndex[1][2] = 6;
	multTableWithIndex[1][3] = 8;

	multTableWithIndex[2][0] = 3;
	multTableWithIndex[2][1] = 6;
	multTableWithIndex[2][2] = 9;
	multTableWithIndex[2][3] = 12;

	multTableWithIndex[3][0] = 4;
	multTableWithIndex[3][1] = 8;
	multTableWithIndex[3][2] = 12;
	multTableWithIndex[3][3] = 16;	

	if (CompareTables(multTableInit, 4, multTableWithIndex, 4))
		cout << "Tables are equal." << endl;
	else
		cout << "Tables are not equal." << endl;
}

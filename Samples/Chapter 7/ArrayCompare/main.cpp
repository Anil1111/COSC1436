/*
 * COSC 1436 
 *
 * Demonstrates array comparison.
 */
#include <iostream>

using namespace std;

#define CompareArrays CompareArraysWrong

bool CompareArraysWrong ( int arr1[], int length1, int arr2[], int length2 )
{	
	return arr1 == arr2;
};

//Compares two arrays for equality.
bool CompareArraysBetter ( int arr1[], int length1, int arr2[], int length2 )
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

void main ( )
{
	int arr1[] = { 2, 4, 6, 8, 10 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	int arr3[] = { 1, 3, 5, 7, 9 };
	int arr4[] = { 2, 4, 6 };
		
	if (CompareArrays(arr1, 5, arr2, 5))
		cout << "arr1 is equal to arr2." << endl;
	else
		cout << "arr1 is not equal to arr2." << endl;
	
	if (CompareArrays(arr1, 5, arr3, 5))
		cout << "arr1 is equal to arr3." << endl;
	else
		cout << "arr1 is not equal to arr3." << endl;

	if (CompareArrays(arr1, 5, arr4, 5))
		cout << "arr1 is equal to arr4." << endl;
	else
		cout << "arr1 is not equal to arr4." << endl;
}
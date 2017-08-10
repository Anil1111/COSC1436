/*
 * COSC 1436
 *
 * Demonstrates array initialization.
 */
#include <iostream>

using namespace std;

void main ( )
{
	const int size = 10;

#pragma region "Uninit Array"
	
	int uninitArray[size];

	for (int index = 0; index < size; ++index)
		cout << "uninitArray[" << index << "] = " 
			 << uninitArray[index] << endl;
	cout << endl << endl;
#pragma endregion
	
#pragma region "Full init Array"
	
	int fullInitArray[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int index = 0; index < size; ++index)
		cout << "fullInitArray[" << index << "] = " 
			 << fullInitArray[index] << endl;
	cout << endl << endl;
#pragma endregion

#pragma region "Partial init Array"
	
	int partialInitArray[size] = { 1, 2, 3, 4, 5 };

	for (int index = 0; index < size; ++index)
		cout << "partialInitArray[" << index << "] = " 
			 << partialInitArray[index] << endl;
	cout << endl << endl;
#pragma endregion

#pragma region "Zero initing array"

	int zeroInitArray[size] = { 0 };

	for (int index = 0; index < size; ++index)
		cout << "zeroInitArray[" << index << "] = " 
			 << zeroInitArray[index] << endl;
	cout << endl << endl;
#pragma endregion
}
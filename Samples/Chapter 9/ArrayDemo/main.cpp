/*
 * COSC 1436
 *
 * Demonstrates the association of an array and a pointer.
 */
#include <iostream>

using namespace std;

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void main ( )
{	
	int evens[] = { 2, 4, 6, 8, 10 };
	
#pragma region Enumerate as array
	
	cout << "Enumerate as array" << endl;
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
		cout << "evens[" << index << "] = " << evens[index] << endl;
	cout << endl;

#pragma endregion
	
#pragma region Enumerate as pointer
	int* pEvens = evens;

	cout << "Enumerate as pointer" << endl;
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
		cout << "evens[" << index << "] = " << pEvens[index] << endl;
	cout << endl;

#pragma endregion

#pragma region Change array element

	cout << "Changing array elements through pointer" << endl;
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
	{
		//evens[index]
		*(pEvens + index) = evens[index] * 2;
	};
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
		cout << "evens[" << index << "] = " << pEvens[index] << endl;
	cout << endl;

#pragma endregion

#pragma region Mystery

	for (int index = 0; index < ARRAY_SIZE(pEvens); ++index)
		cout << "evens[" << index << "] = " << pEvens[index] << endl;
	cout << endl;
#pragma endregion
}
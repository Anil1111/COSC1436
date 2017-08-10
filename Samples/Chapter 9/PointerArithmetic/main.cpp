/*
 * COSC 1436
 * 
 * Demonstrates basic pointer arithmetic.
 */
#include <iostream>

using namespace std;

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void main ( )
{
	int evens[] = { 2, 4, 6, 8, 10 };	
	int* pEvens = evens;
	
	cout << "Basic int array" << endl;
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
		cout << "evens[" << index << "] = " << *pEvens++ << " at address 0x" << pEvens << endl;
	cout << endl;

	//NOTE: pEvens was incremented each time through so 
	//it has to be reset in order to enumerate again
	cout << "Changing int array" << endl;
	pEvens = evens;
	for (int index = 0; index < ARRAY_SIZE(evens); ++index)
	{
		*pEvens *= 2;
		cout << "evens[" << index << "] = " << *pEvens++ << " at address 0x" << pEvens << endl;
	};
	cout << endl;

	double reals[] = { 4.5, 6.7, 8.9, 10.12 };
	double* pReals = reals;

	cout << "Basic double array" << endl;
	for (int index = 0; index < ARRAY_SIZE(reals); ++index)
		cout << "reals[" << index << "] = " << *pReals++ << " at address 0x" << pReals << endl;

	cout << endl;

	//NOTE: pReals was incremented each time through so 
	//it has to be reset in order to enumerate again
	cout << "Changing double array" << endl;
	pReals = reals;
	for (int index = 0; index < ARRAY_SIZE(reals); ++index)
	{
		*pReals *= 2;
		cout << "reals[" << index << "] = " << *pReals++ << " at address 0x" << pReals << endl;
	};
	cout << endl;
}
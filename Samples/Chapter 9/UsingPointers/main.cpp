/*
 * COSC 1436
 *
 * Demonstrates defining and using a basic pointer.
 */
#include <iostream>

using namespace std;

void main ( )
{
	int stackValue = 100;
	int* pValue = &stackValue;
	
	cout << "stackValue = " << stackValue << " at address " << &stackValue << endl;
	cout << "pValue = " << pValue << " at address " << &pValue << " has value " << *pValue << endl;
	cout << endl;

	stackValue *= 2;

	cout << "stackValue = " << stackValue << " at address " << &stackValue << endl;
	cout << "pValue = " << pValue << " at address " << &pValue << " has value " << *pValue << endl;
	cout << endl;

	*pValue *= 2;

	cout << "stackValue = " << stackValue << " at address " << &stackValue << endl;
	cout << "pValue = " << pValue << " at address " << &pValue << " has value " << *pValue << endl;
}
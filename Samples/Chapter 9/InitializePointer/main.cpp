/*
 * COSC 1436
 *
 * Demonstrates the various ways to initialize a pointer.
 */
#include <iostream>

using namespace std;

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void main ( )
{
	int stackVariable = 20;
	int arrVariable[] = { 2, 4, 6, 8, 10 };
	int* pValue = nullptr;
	
	//Print the basics
	cout << "Initial values" << endl;

	if (pValue != nullptr)
		cout << "pValue [0x" << pValue << "] = " << *pValue << endl;
	else
		cout << "pValue [0x" << pValue << "] = nullptr" << endl;
	cout << "stackVariable [0x" << &stackVariable << "] = " << stackVariable << endl;
	cout << "arrVariable [0x" << arrVariable << "] = {";
	for (int index = 0; index < ARRAY_SIZE(arrVariable); ++index)
		cout << ((index > 0) ? "," : "") << arrVariable[index];
	cout << "}" << endl << endl;

	//Assign pointer to stack variable
	pValue = &stackVariable;

	cout << "Pointer to stack variable" << endl;
	cout << "pValue [0x" << pValue << "] = " << *pValue << endl;
	cout << "stackVariable [0x" << &stackVariable << "] = " << stackVariable << endl;
	cout << "arrVariable [0x" << arrVariable << "] = {";
	for (int index = 0; index < ARRAY_SIZE(arrVariable); ++index)
		cout << ((index > 0) ? "," : "") << arrVariable[index];
	cout << "}" << endl << endl;

	//Assign pointer to arr variable
	pValue = arrVariable;

	cout << "Pointer to array variable" << endl;
	cout << "pValue [0x" << pValue << "] = " << *pValue << endl;
	cout << "stackVariable [0x" << &stackVariable << "] = " << stackVariable << endl;
	cout << "arrVariable [0x" << arrVariable << "] = {";
	for (int index = 0; index < ARRAY_SIZE(arrVariable); ++index)
		cout << ((index > 0) ? "," : "") << arrVariable[index];
	cout << "}" << endl << endl;
}

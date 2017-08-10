/*
 * COSC 1436
 *
 * Demonstrates returning a pointer from a function.
 */
#include <iostream>

using namespace std;

int someGlobalVariable = 100;

void PrintIntPointer ( int* value )
{
	cout << "Address: 0x" << value << endl;
	cout << "Value: ";
	if (value != nullptr)
		cout << *value;
	else
		cout << "(nullptr)";
	cout << endl;
}

int* ReturnsABadPointer ( )
{
	int someValue = 20;
	int* ptr = &someValue;

	//BAD!!!!!!
	cout << "Returning - " << endl;
	PrintIntPointer(ptr);
	return ptr;
};

int* ReturnsABadPointerAgain ( int value )
{
	int* ptr = &value;
		
	cout << "Returning - " << endl;
	PrintIntPointer(ptr);

	return ptr;
};

int* ReturnAGlobalVariable ( )
{
	int* ptr = &someGlobalVariable;

	cout << "Returning - " << endl;
	PrintIntPointer(ptr);
	
	return ptr;
};

int* ReturnAnElement ( int values[], int count )
{
	int* ptr = nullptr;

	for (int index = 0; index < count; ++index)
	{
		if (values[index] == 0)
		{
			ptr = values + index;
			break;
		};
	};

	cout << "Returning - " << endl;
	PrintIntPointer(ptr);

	return ptr;
};

void main ( )
{
	int* pReturned;

	pReturned = ReturnsABadPointer();
	cout << "Returned - " << endl;
	PrintIntPointer(pReturned);
	cout << endl;

	pReturned = ReturnsABadPointerAgain(10);
	cout << "Returned - " << endl;
	PrintIntPointer(pReturned);
	cout << endl;

	pReturned = ReturnAGlobalVariable();
	cout << "Returned - " << endl;
	PrintIntPointer(pReturned);
	cout << endl;

	int numbers[] = { 2, 4, 0, 8, 10 };	

	pReturned = ReturnAnElement(numbers, 5);
	cout << "Returned - " << endl;
	PrintIntPointer(pReturned);
	cout << endl;
}
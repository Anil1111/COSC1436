/* 
 * COSC 1436
 * Demonstrates a bad pointer reference.
 */
#include <iostream>

using namespace std;

//Prints an integer pointer and its value.
void PrintIntPointer ( int* value )
{
	cout << "Address: 0x" << value << endl;
	cout << "Value: ";
	if (value != nullptr)
		cout << *value;
	else
		cout << "(null)";
	cout << endl;
}

int* GetBadPointer ( )
{
	int value = 10;
	int* ptr = &value;

	return ptr;
}

void CrashUsingInvalidPointer ( )
{	
	int* ptr = GetBadPointer();
	PrintIntPointer(ptr);

	*ptr = 100;
}

void CrashUsingNullPointer ( )
{
	int* ptr = nullptr;
	PrintIntPointer(ptr);

	int value = *ptr;
}

void CrashUsingUninitializedPointer ( )
{
	int* ptr;
	PrintIntPointer(ptr);
	
	*ptr = 200;	
}

void main ( )
{
	//Select mechanism of crash
	cout << "Select how you want to crash:" << endl;	
	cout << "I)nvalid pointer (write)" << endl;
	cout << "N)ULL pointer (read)" << endl;	
	cout << "U)ninitialized pointer (write)" << endl;
	
	char choice;
	cin >> choice;

	switch(tolower(choice))
	{
		case 'i': CrashUsingInvalidPointer(); break;
		case 'n': CrashUsingNullPointer(); break;
		case 'u': CrashUsingUninitializedPointer(); break;
	};
}
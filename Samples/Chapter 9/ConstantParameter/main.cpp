/*
 * COSC 1436
 *
 * Demonstrates the various combinations of const parameters with references and pointers.
 */
#include <iostream>
#include <iomanip>

using namespace std;

int someGlobal = 400;
int someGlobal2 = 100;
int* pGlobal;

void DisplayHeader ( )
{
	cout << left << setw(20) << "Action" << right << setw(15) << "someGlobal" << setw(15) << "someGlobal2" << setw(15) << "pGlobal" << endl;
	cout << setfill('-') << setw(70) << "" << endl;

	cout << setfill(' ');
}

void DisplayValues ( char* msg )
{
	cout << left << setw(20) << msg << right << setw(15) << someGlobal << setw(15) << someGlobal2;
	if (pGlobal == &someGlobal)
		cout << setw(15) << "someGlobal" << endl;
	else if (pGlobal == &someGlobal2)
		cout << setw(15) << "someGlobal2" << endl;
	else
		cout << endl;
}

//Pointer to T
void PointerToNonConst ( int* value )
{		
	//Can change the underlying nonconst value
	*value *= 2;

	//Can change the pointer value	
	value = &someGlobal2;
	*value *= 2;
};

// Const pointer to T
void ConstPointer ( int* const value )
{
	//Can change the underlying nonconst value
	*value *= 2;

	//Cannot change the pointer value		
	//value = &someGlobal2;
	*value *= 2;
};

// Pointer to const T
void PointerToConst ( int const* value )
{
	//Cannot change the underlying nonconst value
	//*value *= 2;

	//Can change the pointer value		
	value = &someGlobal2;
	//*value *= 2;
};

// Const pointer to const T
void ConstPointerToConst ( int const* const value )
{
	//Cannot change the underlying nonconst value
	//*value *= 2;

	//Cannot change the pointer value		
	//value = &someGlobal2;
	//*value *= 2;
};

void main ( )
{
	DisplayHeader();
	DisplayValues("Initial");

	// 1) T* => ptr to T
	// 2) T* const => const ptr to T
	// 3) T const* => ptr to const T
	// 4) const T* => ptr to const T
	// 5) T const* const => const ptr to const T
	// 6) const T* const => const ptr to const T
	//
	// 3 & 4 are equal
	// 5 & 6 are equal
	pGlobal = &someGlobal;
	PointerToNonConst(pGlobal);	
	DisplayValues("PointerToNonConst");

	pGlobal = &someGlobal;
	ConstPointer(pGlobal);
	DisplayValues("ConstPointer");

	pGlobal = &someGlobal;
	PointerToConst(pGlobal);
	DisplayValues("PointerToConst");

	pGlobal = &someGlobal;
	ConstPointerToConst(pGlobal);
	DisplayValues("ConstPointerToConst");
}
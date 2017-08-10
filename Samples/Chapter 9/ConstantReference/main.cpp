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
int& refGlobal = someGlobal;

void DisplayHeader ( )
{
	cout << left << setw(20) << "Action" << right << setw(15) << "someGlobal" << setw(15) << "someGlobal2" << setw(15) << "refGlobal" << endl;
	cout << setfill('-') << setw(70) << "" << endl;

	cout << setfill(' ');
}

void DisplayValues ( char* msg )
{
	cout << left << setw(20) << msg << right << setw(15) << someGlobal << setw(15) << someGlobal2;
	if (&refGlobal == &someGlobal)
		cout << setw(15) << "someGlobal" << endl;
	else if (&refGlobal == &someGlobal2)
		cout << setw(15) << "someGlobal2" << endl;
	else
		cout << endl;
}

//Reference to T
void ReferenceToNonConst ( int& value )
{		
	//Can change the underlying nonconst value
	value *= 2;

	//Cannot change the ref value	
	//value = someGlobal2;
	//value *= 2;
};

// Const reference to T - redundant and useless over pass by value syntax
void ConstReference ( int& const value )
{
	//Can change the underlying nonconst value
	value *= 2;

	//Cannot change the ref value		
	//value = someGlobal2;
	value *= 2;
};

// Reference to const T - commonly used on large types to optimize their perf w/o allowing changes
void ReferenceToConst ( int const& value )
{
	//Cannot change the underlying nonconst value
	//value *= 2;

	//Cannot change the ref value			
	//value = someGlobal2;
	//value *= 2;
};

// Const reference to const T - redundant and useless
void ConstReferenceToConst ( int const& const value )
{
	//Cannot change the underlying nonconst value
	//value *= 2;

	//Cannot change the ref value		
	//value = someGlobal2;
	//value *= 2;
};

void main ( )
{
	DisplayHeader();
	DisplayValues("Initial");

	// 1) T& => ref to T
	// 2) T& const => const ref to T
	// 3) T const& => ref to const T
	// 4) const T& => ref to const T
	// 5) T const& const => const ref to const T
	// 6) const T& const => const ref to const T
	//
	// 3 & 4 are equal
	// 5 & 6 are equal
	// 2, 5 & 6 are redundant
	refGlobal = someGlobal;
	ReferenceToNonConst(refGlobal);	
	DisplayValues("ReferenceToNonConst");

	refGlobal = someGlobal;
	ConstReference(refGlobal);
	DisplayValues("ConstReference");

	refGlobal = someGlobal;
	ReferenceToConst(refGlobal);
	DisplayValues("ReferenceToConst");

	refGlobal = someGlobal;
	ConstReferenceToConst(refGlobal);
	DisplayValues("ConstReferenceToConst");
}
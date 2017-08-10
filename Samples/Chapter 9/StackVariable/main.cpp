/*
 * COSC 1436
 *
 * Demonstrates the two values of a variable.
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( )
{
	int intValue = 10;
	float floatValue = 20.5;
	char stringValue[] = "Hello World";

	cout << "Initial value " << endl << endl;
	cout << setw(20) << "Variable" << "\t" << setw(15) << "Value" << "\t" << setw(10) << "Address" << endl;
	cout << setw(60) << setfill('-') << "" << endl;
	cout << setfill(' ');

	cout << setw(20) << "intValue" << "\t" << setw(15) << intValue << "\t" << setw(10) << &intValue << endl;
	cout << setw(20) << "floatValue" << "\t" << setw(15) << floatValue << "\t" << setw(10) << &floatValue << endl;
	cout << setw(20) << "stringValue" << "\t" << setw(15) << stringValue << "\t" << setw(10) << &stringValue << endl;

	//Change a value
	intValue = 100;
	floatValue = 40.5;
	strcpy(stringValue, "Goodbye");	

	cout << endl << "Updated value " << endl << endl;
	cout << setw(20) << "Variable" << "\t" << setw(15) << "Value" << "\t" << setw(10) << "Address" << endl;
	cout << setw(60) << setfill('-') << "" << endl;
	cout << setfill(' ');

	cout << setw(20) << "intValue" << "\t" << setw(15) << intValue << "\t" << setw(10) << &intValue << endl;
	cout << setw(20) << "floatValue" << "\t" << setw(15) << floatValue << "\t" << setw(10) << &floatValue << endl;
	cout << setw(20) << "stringValue" << "\t" << setw(15) << stringValue << "\t" << setw(10) << &stringValue << endl;
}
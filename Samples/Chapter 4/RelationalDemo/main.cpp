/*
 * Demonstrates the relational operators.
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( )
{
	int value1, value2;

	cout << "Enter the first number: ";
	cin >> value1;

	cout << "Enter the second number: ";
	cin >> value2;

	cout << endl << setw(10) << "Value 1" << "  Op  " << setw(10) << "Value 2 " << setw(10) << "Result" << endl;
	cout << "------------------------------------------------" << endl;

	bool result = value1 < value2;
	cout << setw(10) << value1 << "  <  " << setw(10) << value2 << setw(10) << result << endl;
	
	result = value1 <= value2;
	cout << setw(10) << value1 << "  <= " << setw(10) << value2 << setw(10) << result << endl;
	
	result = value1 > value2;
	cout << setw(10) << value1 << "  >  " << setw(10) << value2 << setw(10) << result << endl;

	result = value1 >= value2;
	cout << setw(10) << value1 << "  >= " << setw(10) << value2 << setw(10) << result << endl;

	cout << setw(10) << value1 << "  == " << setw(10) << value2 << setw(10) << (value1 == value2) << endl;
	cout << setw(10) << value1 << "  != " << setw(10) << value2 << setw(10) << (value1 != value2) << endl;

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.ignore();
	cin.get();
#pragma endregion
}
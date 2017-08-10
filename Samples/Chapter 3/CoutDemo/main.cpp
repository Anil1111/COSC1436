/*
 * Demonstrates formatted output using cout
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( void )
{
#pragma region SetPrecision
	double smallValue = 12.345;

	cout << smallValue << endl;
	cout << "(" << setw(10) << smallValue << ")" << endl;
	cout << setprecision(4) << smallValue << endl;
	cout << endl;	
	cout << setprecision(6);
#pragma endregion

#pragma region SetW
	double largeValue = 1234.5678;

	cout << largeValue << endl;
	cout << "(" << setw(10) << largeValue << ")" << endl;
		cout << endl;
#pragma endregion

#pragma region Fixed
	double reallyLargeValue = 12345678.901;

	cout << reallyLargeValue << endl;
	cout << fixed << reallyLargeValue << endl;
	cout << fixed << setprecision(2) << reallyLargeValue << endl;
	cout << endl;
#pragma endregion

#pragma region Left, Right
	int result1 = 12345;
	int result2 = 678;
	int result3 = 90;

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << left;
	cout << "(" << setw(10) << result1 << ")" << endl;
	cout << "(" << setw(10) << result2 << ")" << endl;
	cout << "(" << setw(10) << result3 << ")" << endl;
	cout << right;
	cout << "(" << setw(10) << result1 << ")" << endl;
	cout << "(" << setw(10) << result2 << ")" << endl;
	cout << "(" << setw(10) << result3 << ")" << endl;
#pragma endregion

#pragma region SetFill
	char password[20] = { 0 };
	
	cout << left << setfill('*');
	cout << setw(7) << password << endl;	
#pragma endregion

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
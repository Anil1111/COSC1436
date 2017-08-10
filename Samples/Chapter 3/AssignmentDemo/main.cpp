/*
 * Demonstrates multiple assignment and arithmetic assignment operators
 */
#include <iostream>

using namespace std;

void main ( )
{
#pragma region Basic Assignment
	int a, b, c;

	a = b = c = 10;
	cout << "A: " << a << "\tB:" << b << "\tC: " << c << endl;
#pragma endregion

#pragma region Arithmetic Assignment
	a *= 2;
	b %= 3;
	c += a + b;
	cout << "A: " << a << "\tB:" << b << "\tC: " << c << endl;
#pragma endregion

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
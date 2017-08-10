/*
 * This program demonstrates type coercion.
 */
#include <iostream>

using namespace std;

void main ( )
{
#pragma region Short Values

	short smallValue = (0xFFFF / 2) + 1;
	
	int value1 = smallValue * 2;
	cout << smallValue << " * 2 = " << value1 << endl;

	short value2 = smallValue * 2;
	cout << smallValue << " * 2 = " << value2 << endl;

#pragma endregion

#pragma region Integer Values

	int largeValue = 0x80000000;
	long value3 = largeValue * 3;
	cout << largeValue << " * 3 = " << value3 << endl;
	
#pragma endregion

#pragma region Integer Division

	int dividend = 41;
	int divisor = 7;
	double divResult = dividend / divisor;
	cout << dividend << " / " << divisor << " = " << divResult << endl;

#pragma endregion
	
#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
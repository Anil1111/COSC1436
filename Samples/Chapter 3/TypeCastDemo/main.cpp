/* 
 * Demonstrates typecasting.
 */
#include <iostream>

using namespace std;

void main ( )
{
	float initialValue = 45.67F;

#pragma region Implicit conversion with warning

	//Generates a warning
	int value1 = initialValue;

#pragma endregion

#pragma region C++ typecast
	
	int value2 = static_cast<int>(initialValue);

#pragma endregion

#pragma region C typecast
	
	int value3 = (int)initialValue;

	double actualResult = 45 / (double)7;
#pragma endregion

#pragma region Implicit Conversions
	
	char firstLetter = 65;
	int lastletter = 'Z';

#pragma endregion

#pragma region Bad Conversion	
	
	int oops = (int)"5";

#pragma endregion

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
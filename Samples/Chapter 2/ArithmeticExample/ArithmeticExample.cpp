/*
 * Demonstrates basic arithmetic operators.
 */
#include <iostream>

void main ( )
{
#pragma region Unary

    int positiveValue = +100;
    int negativeValue = -135;

#pragma endregion

#pragma region Binary

    int addValues = 56 + 73;
    int subValues = 98 - 141;    
    int multValues = 20 * 15;
    int divValues = 45 / 30;    
	int remValues = 45 / 30;

    double addDoubles = 56.45 + 73.13;
    double subDoubles = 98.73 - 141.86;    
    double multDoubles = 20.5 * 15;
    double divDoubles = 45.75 / 30;
    double remDoubles = 45 / 30.3;

#pragma endregion
}
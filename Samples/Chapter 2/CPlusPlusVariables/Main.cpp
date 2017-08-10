/*
 * Demonstrates basic variable usage.
 */
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void main ( void )
{
#pragma region Boolean

    bool isTrue, isFalse;
    bool areEqual;

    isTrue = true;
    isFalse = false;

    areEqual = (10 == 20);
#pragma endregion

#pragma region Integers

	// Signed integers
	short smallestShort, largestShort;
	int smallestInt, largestInt;
    long smallestLong, largestLong;
	
	smallestShort = -32768;
	largestShort = 32767;

    smallestInt = -2147483648;
	largestInt = 2147483647;

    smallestLong = 0x80000000;
	largestLong = 0x7FFFFFFF;
    
	// Unsigned integers
	unsigned short smallestUShort, largestUShort;
    unsigned int smallestUInt, largestUInt;
	unsigned long smallestULong, largestULong;

	smallestUShort = 0;
	largestUShort = 65535;

    smallestUInt = 0;
	largestUInt = 4294967295;

    smallestULong = 00;
	largestULong = 0xFFFFFFFF;
	
#pragma endregion

#pragma region Reals

	//Floats 
	float smallestFloat, largestFloat;
	float nanFloat, infinityFloat;
    
	smallestFloat = 1e-38F;
	largestFloat = 1e38F;
	nanFloat = numeric_limits<float>::quiet_NaN();
	infinityFloat = numeric_limits<float>::infinity();
    
	// Doubles
	double smallestDouble, largestDouble;
	double nanDouble, infinityDouble;
    
	smallestDouble = 1e-308;
    largestDouble = 1e308;
	nanDouble = numeric_limits<double>::quiet_NaN();
	infinityDouble = numeric_limits<double>::infinity();

#pragma endregion

#pragma region Characters and strings

	//Characters
    char smallestChar, largestChar;
	char firstLetter, lastLetter;

	smallestChar = -128;
	largestChar = 127;

    firstLetter = 'A';
    lastLetter = 'Z';

	//strings
	char emptyString[] = "";
    char greeting[] = "Hello World";
    char course[] = "COSC 1436";
    string cplusplusString = "C++ Programming";

#pragma endregion
}
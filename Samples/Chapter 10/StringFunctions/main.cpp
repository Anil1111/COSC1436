/*
 * COSC 1436
 * 
 * Demonstrates various string functions.
 */
#include <iostream>

using namespace std;

void main ( )
{				
	const int MaxSize = 100;

	char source[MaxSize] = "Source string";
	char destination[MaxSize] = { 0 };

	//Basic string copy
	strcpy(destination, source);
	
	//Length
	int sourceLength = strlen(source);
	int destinationLength = strlen(destination);

	//Case sensitive comparison
	int comparisonResult = strcmp(destination, source);
	destination[4] = toupper(destination[4]);	
	comparisonResult = strcmp(destination, source);

	//Case insensitive comparison
	comparisonResult = _stricmp(destination, source);

	//String copy with length
	strcpy(source, "Goodbye");
	strncpy(destination, source, 6);
	
	//String concatenation
	strcat(destination, source);

	//String concatenation with length
	strncat(destination, source, 5);

	//Finding strings
	char* pos = strstr(destination, "be");
}

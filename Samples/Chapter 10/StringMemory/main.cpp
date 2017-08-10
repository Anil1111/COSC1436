/*
 * COSC 1436
 *
 * Demonstrates the memory layout of strings.
 */
#include <iostream>

using namespace std;

void main ( )
{
	char stringAsArray[100] = "String as Array";
	char stringAsArray2[] = "Implicit string size";
	
	char charArray[] = { 'c', 'h', 'a', 'r', ' ', 'A', 'r', 'r', 'a', 'y' };
	char* pLiteral = "String Literal";	
}
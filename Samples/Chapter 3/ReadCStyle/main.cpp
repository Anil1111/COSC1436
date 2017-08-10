/*
 * Demonstrates reading a string using C-style functions
 */ 
#include <iostream>
#include <cstdio>

using namespace std;

void main ( )
{
#pragma region Read Integers
	int first, second;

	printf("Enter the first number: ");
	scanf("%d", &first);

	printf("Enter the second number: ");
	scanf("%d", &second);

	printf("%d + %d = %d\n", first, second, first + second);
#pragma endregion

#pragma region Read Strings
	char firstName[10], secondName[10];

	printf("\nEnter your first and last name: ");
	scanf("%s %s", firstName, secondName);
	printf("Hello %s %s", firstName, secondName);
#pragma endregion
		
#pragma region Wait
	printf("\n\nPress ENTER to quit");
	cin.ignore();
	cin.get();
#pragma endregion
}
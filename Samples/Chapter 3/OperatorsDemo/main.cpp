/*
 * Demonstrates the available arithmetic operators
 */
#include <iostream>
#include <cmath>

using namespace std;

void main ( )
{
	int a, b, c;

	//Get the input values
	cout << "Enter the value of a: ";
	cin >> a;

	cout << "Enter the value of b: ";
	cin >> b;

	cout << "Enter the value of c: ";
	cin >> c;
	
	//Calculate the quadratic (-b +- SQRT(b^2 - 4ac)) / 2a
	double intermediary = b * b - 4 * a * c;

	double positiveX = -b + sqrt(intermediary) / 2 * a;
	double negativeX = -b - sqrt(intermediary) / 2 * a;

	cout << "X = " << positiveX << " or " << negativeX << endl;

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.ignore();
	cin.get();
#pragma endregion
}
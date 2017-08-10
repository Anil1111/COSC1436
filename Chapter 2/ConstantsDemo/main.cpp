/*
 * Demonstrates the use of constants
 */
#include <iostream>

using namespace std;

void main ( void )
{
	const double PI = 3.14159;

    cout << "The area of a circle is: " << PI << " * r * r" << endl;

	double radius;
	cout << "Enter the radius of a circle: ";
	cin >> radius;

	cout << endl << "The area of the circle is " << PI * radius * radius << endl;

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.ignore();
	cin.get();
#pragma endregion
}
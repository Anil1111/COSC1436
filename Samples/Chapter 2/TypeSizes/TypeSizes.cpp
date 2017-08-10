/*
 * Displays the different type sizes.
 */
#include <iostream>

using namespace std;

void main ( void )
{
	int value = 0;
	int a = 0, b = 0;

	int c = value + a + b;

	cout << value << endl;
	cout << c << endl;

    cout << "Size of short = " << sizeof(short) << endl;
    cout << "Size of integer = " << sizeof(int) << endl;
    cout << "Size of long = " << sizeof(long) << endl;
	cout << endl;
    
    cout << "Size of ushort = " << sizeof(unsigned short) << endl;
    cout << "Size of uint = " << sizeof(unsigned int) << endl;
    cout << "Size of ulong = " << sizeof(unsigned long) << endl;
	cout << endl;

    cout << "Size of float = " << sizeof(float) << endl;
    cout << "Size of double = " << sizeof(double) << endl;
	cout << endl;

    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Size of bool = " << sizeof(bool) << endl;

	cout << "Size of size_t = " << sizeof(size_t) << endl;
	
#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.get();
#pragma endregion
}
/* 
 * Name: 
 * Class:
 * Lab: 
 * Date: 2/21/2012
 */
#include <iostream>

using namespace std;

void main ( )
{
	//for (int x = 0, y = 5; y > 0, x < 10; ++x, --y)
	for (int x = 0, y = 5; x < 10, y > 0; ++x, --y)	
	{		
		cout << "X = " << x << "\tY = " << y << endl;			
	};

#pragma region Comma
	//int value = 10, 3;
	//value = 10, 3;				
#pragma endregion

#pragma region Wait
	//Pause the program
	cout << "Press ENTER to quit";
	cin.sync();

	cin.get();
#pragma endregion
}
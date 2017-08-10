/*
 * Demonstrates formatted output using C-style functions.
 */
#include <iostream>
#include <cstdio>

using namespace std;

void main ( )
{
#pragma region Precision
	double smallValue = 12.345;

	printf("%g\n", smallValue);			//cout << smallValue << endl;
	printf("(%10g)\n", smallValue);		//cout << "(" << setw(10) << smallValue << ")" << endl;
	printf("%.4g\n", smallValue);		//cout << setprecision(4) << smallValue << endl;
	printf("\n");						//cout << endl;	
										//cout << setprecision(6);
#pragma endregion

#pragma region Width
	double largeValue = 1234.5678;
	
	printf("%g\n", largeValue);		//cout << largeValue << endl;
	printf("(%10g)\n", largeValue);	//cout << "(" << setw(10) << largeValue << ")" << endl;
	printf("\n");					//cout << endl;
#pragma endregion

#pragma region Fixed
	double reallyLargeValue = 12345678.901;
	
	printf("%g\n", reallyLargeValue);	//cout << reallyLargeValue << endl;
	printf("%f\n", reallyLargeValue);	//cout << fixed << reallyLargeValue << endl;
	printf("%.2f\n", reallyLargeValue);	//cout << fixed << setprecision(2) << reallyLargeValue << endl;
	printf("\n");						//cout << endl;
#pragma endregion

#pragma region Left, Right
	int result1 = 12345;
	int result2 = 678;
	int result3 = 90;
	
	printf("%d\n", result1);		//cout << result1 << endl;
	printf("%d\n", result2);		//cout << result2 << endl;
	printf("%d\n", result3);		//cout << result3 << endl;
				
									//cout << left;
	printf("(%-10d)\n", result1);	//cout << "(" << setw(10) << result1 << ")" << endl;
	printf("(%-10d)\n", result2);	//cout << "(" << setw(10) << result2 << ")" << endl;
	printf("(%-10d)\n", result3);	//cout << "(" << setw(10) << result3 << ")" << endl;

									//cout << right;
	printf("(%10d)\n", result1);	//cout << "(" << setw(10) << result1 << ")" << endl;
	printf("(%10d)\n", result2);	//cout << "(" << setw(10) << result2 << ")" << endl;
	printf("(%10d)\n", result3);	//cout << "(" << setw(10) << result3 << ")" << endl;
#pragma endregion

#pragma region Fill
	//No printf equivalent
	//char password[20] = { 0 };
	//cout << left << setfill('*');
	//cout << setw(7) << password << endl;	

	int value = 1234;
	printf("%010d\n", value); 
#pragma endregion

#pragma region Wait
	cout << endl << "Press ENTER to quit";
	cin.get();
#pragma endregion
}
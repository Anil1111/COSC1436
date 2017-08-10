/*
 * COSC 1436
 *
 */
#include <iostream>

using namespace std;

void main ( )
{
	//Initialize using initializer expression
	int multTableInit[4][4] = {
		{ 1, 2, 3, 4 },
		{ 2, 4, 6, 8 },
		{ 3, 6, 9, 12 },
		{ 4, 8, 12, 16 }
	};

	//Initialize using indexing
	int multTableWithIndex[4][4] = { 0 };
	multTableWithIndex[0][0] = 1;
	multTableWithIndex[0][1] = 2;
	multTableWithIndex[0][2] = 3;
	multTableWithIndex[0][3] = 4;
	
	multTableWithIndex[1][0] = 2;
	multTableWithIndex[1][1] = 4;
	multTableWithIndex[1][2] = 6;
	multTableWithIndex[1][3] = 8;

	multTableWithIndex[2][0] = 3;
	multTableWithIndex[2][1] = 6;
	multTableWithIndex[2][2] = 9;
	multTableWithIndex[2][3] = 12;

	multTableWithIndex[3][0] = 4;
	multTableWithIndex[3][1] = 8;
	multTableWithIndex[3][2] = 12;
	multTableWithIndex[3][3] = 16;	
}

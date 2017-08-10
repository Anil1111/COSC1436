/*
 * COSC 1436
 *
 * Demonstrates the different scopes of variables.
 */
#include <iostream>
#include "Secret.h"

using namespace std;

int IndentPrint::g_indentLevel = 0;
int VerboseInt::g_uniqueId = 1;

void Function1 ( );
void Function2 ( );
void Function3 ( );

void Function1 ( )
{
	Scope scope("Function1");

	VerboseInt localVariable = 20;

	Function2();
}

void Function2 ( )
{
	Scope scope("Function2");

	VerboseInt localVariable = 30;

	Function3();
}

void Function3 ( )
{
	Scope scope("Function3");

	VerboseInt localVariable = 40;

	for (VerboseInt index = 0; index < 10; index = index + 1)
	{
		Scope scope2("for");
		VerboseInt innerForVariable = 50;
	};
}

void main ( )
{
	Scope scope("main");

	VerboseInt localMainVariable = 10;

	Function1();	
}
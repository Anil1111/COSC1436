/*
 * COSC 1436
 *
 * Demonstrates calling a function with parameters.
 */
#include <iostream>
#include "MathFunctions.h"

using namespace std;

// Summary: Prompts the user to continue.
void PromptToContinue ( )
{
	cout << "Press Q to quit or any other key to continue." << endl;	
}

// Summary: Prompts the user for an option.
void PromptUser ( )
{
	cout << "Enter a mathematical expression.  op can be: + - * /" << endl;
	cout << "Enter expression (op1 op op2): " << endl;		
}

// Summary: Performs a math operation.
// Parameters:
//    operand1 - The first operand.
//    operand2 - The second operand.
//    op - The operation.
void DoMath ( double operand1, double operand2, char op )
{	
	switch(op)
	{
		case '+': Add(operand1, operand2); break;
		case '-': Subtract(operand1, operand2); break;
		case '*': Multiply(operand1, operand2); break;
		case '/': Divide(operand1, operand2); break;
		default: 
		{
			cout << "Unknown expression" << endl;
			break;
		};
	};
}

void main ( )
{
	bool done = false;
	while (!done)
	{		
		PromptUser();

		//Get the user's input
		double operand1, operand2;
		char op;
		cin >> operand1 >> op >> operand2;
		
		//Do the work
		DoMath(operand1, operand2, op);

		//Continue?
		PromptToContinue();

		char choice;
		cin >> choice;
		done = ('Q' == choice) || ('q' == choice);
	};
}
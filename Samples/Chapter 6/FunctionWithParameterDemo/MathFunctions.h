/*
 * COSC 1436
 *
 * Provides basic math functions
 */
#pragma once

using namespace std;

/*
 * Pretty prints an expression
 *
 * PARAMETERS:
 *    operand1 - The first operand.
 *    operand2 - The second operand.
 *    result - The result.
 *    op - The operation.
 */
void DisplayExpression ( double operand1, double operand2, double result, char op )
{
	cout << fixed << operand1 << " " << op << " " << operand2 << " = " << result << endl << endl;
}

/*
 * Adds two numbers.
 *
 * PARAMETERS:
 *    operand1 - The first operand.
 *    operand2 - The second operand.
 */
void Add ( double operand1, double operand2 )
{
	double result = operand1 + operand2;

	DisplayExpression(operand1, operand2, result, '+');
}

/*
 * Divides two numbers.
 *
 * PARAMETERS:
 *    operand1 - The first operand.
 *    operand2 - The second operand.
 */
void Divide ( double operand1, double operand2 )
{
	double result = operand1 / operand2;

	DisplayExpression(operand1, operand2, result, '/');
}

/*
 * Multiplies two numbers.
 *
 * PARAMETERS:
 *    operand1 - The first operand.
 *    operand2 - The second operand.
 */
void Multiply ( double operand1, double operand2 )
{
	double result = operand1 * operand2;

	DisplayExpression(operand1, operand2, result, '*');
}

/*
 * Subtracts two numbers.
 *
 * PARAMETERS:
 *    operand1 - The first operand.
 *    operand2 - The second operand.
 */
void Subtract ( double operand1, double operand2 )
{
	double result = operand1 - operand2;

	DisplayExpression(operand1, operand2, result, '-');
}
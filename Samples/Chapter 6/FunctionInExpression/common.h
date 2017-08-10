/*
 * COSC 1436
 *
 * Defines some common functions usable in applications.
 */
#pragma once

#include <iostream>
using namespace std;

// Summary: Waits for the user to press ENTER
void WaitForEnter ( )
{
	cout << "Press ENTER" << endl;
	cin.get();
}
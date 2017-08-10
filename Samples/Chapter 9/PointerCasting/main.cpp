/*
 * COSC 1436
 *
 * Demonstrates const casts.
 */
#include <iostream>

using namespace std;

void main ( )
{
	int someValue = 100;
	int* pncValue = &someValue;
	int const* pcValue = &someValue;
	int* const cpValue = &someValue;
		
	//Removing const-ness using C
	int* pncNewValue;
	
	pncNewValue = pncValue;
	pncNewValue = (int*)pcValue;     //Cannot convert ptr to const to ptr to nonconst
	pncNewValue = cpValue;

	//Removing const-ness using C++
	pncNewValue = const_cast<int*>(pcValue);     //Cannot convert ptr to const to ptr to nonconst
	pncNewValue = cpValue;

	//Making const (non-const -> const is always legal)
	int const* pcNewValue;

	pcNewValue = pncValue;
	pcNewValue = pcValue;
	pcNewValue = cpValue;	

	//Works for references too
	int& rncNewValue = *pncValue;	
	
	rncNewValue = (int&)*pcValue;     //Cannot convert ptr to const to ptr to nonconst
	rncNewValue = *cpValue;

	rncNewValue = const_cast<int&>(*pcValue);     //Cannot convert ptr to const to ptr to nonconst

	//Making const (non-const -> const is always legal)
	int const& rcNewValue = *pncValue;

	// Cannot change a ref once it is initialized
	//rcNewValue = *pcValue;
	//rcNewValue = *cpValue;	
}
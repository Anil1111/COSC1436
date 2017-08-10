/*
 * COSC 1436
 * 
 * Demonstrates dynamic memory usage.
 */
#include <iostream>
#include "Menu.h"

using namespace std;

//We allow only a single file to be open
int* g_hFile = nullptr;

void CloseFile ( )
{
	if (g_hFile != nullptr)
	{
		//TODO: Do some magic to close the file
		cout << "Closing file..." << endl;

		//Always reset ptrs after deletion
		delete g_hFile;
		g_hFile = nullptr;

		cout << "File closed" << endl;
	} else
		cout << "File is already closed" << endl;
}

void OpenFile ( )
{
	//if the file is already open then error
	//A memory leak occurs if we reassign the ptr to something else
	//when it is valid
	if (g_hFile != nullptr)
	{
		cout << "The file is already open." << endl;
		return;
	};

	//TODO: Do some magic to open the file	
	cout << "Opening file..." << endl;

	g_hFile = new int;
	*g_hFile = 0x100000;

	cout << "File opened" << endl;
};

void main ( )
{	
	bool done = false;
	while(!done)
	{
		switch (DisplayMenu())
		{
			case MO_OpenFile : OpenFile(); break;
			case MO_CloseFile: CloseFile(); break;
			case MO_Quit: done = true; break;
			default:
			{
				cout << "Command not supported" << endl;
				break;
			};
		};
	};

	if (g_hFile != nullptr)
		CloseFile();
}